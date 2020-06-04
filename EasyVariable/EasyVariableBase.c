/**
* @file 		EasyVariableBase.c
* @brief		variable base function implement
* @author		dongdd
*/

/**********************************************************************************/
								/* include headers */
/**********************************************************************************/
#include "EasyVariableBase.h"
#include "string.h"

/**********************************************************************************/
								/* function declaration */
/**********************************************************************************/

/**********************************************************************************/
								/* static variables */
/**********************************************************************************/

static EasyVariableBaseUint8_t sgu8DataTypeSizeArray[teEasyVairableBaseMaxTypeNumber + 1] =
{
	sizeof(EasyVariableBaseFloat_t),
	sizeof(EasyVariableBaseUint32_t),
	sizeof(EasyVariableBaseInt32_t),
	sizeof(EasyVariableBaseUint16_t),
	sizeof(EasyVariableBaseInt16_t),
	sizeof(EasyVariableBaseUint8_t),
	sizeof(EasyVariableBaseInt8_t)
};

/**********************************************************************************/
								/* static functions implement */
/**********************************************************************************/
/*
 * @function:	EasyVariableBaseMemcpy
 * easy variable memory copy function
 * @param[in]	pvDestination			destination address
 * @param[in]	pvSource				source address
 * @param[in]	u32Size					copy size
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseMemcpy(void* pvDestination, void* pvSource, EasyVariableBaseUint32_t u32Size)
{
	memcpy(pvDestination, pvSource, u32Size);
}

/*
 * @function:	EasyVariableBaseFindVariable
 * find data handler in variable array
 * @param[in]	ps8Description		data description
 * @param[out]	None
 * @retval		EasyVariableInt32_t		data index in variable array, if not find, return -1
 */
static EasyVariableBaseInt32_t EasyVariableBaseFindVariable(EasyVariableBaseInt8_t* ps8Description)
{
	EasyVariableBaseInt32_t s32DataIndexFind = -1;

	if (strlen(ps8Description) >= EasyVariable_Name_Max_Length)
	{
		return s32DataIndexFind;
	}

	for (EasyVariableBaseUint32_t u32DataIndex = 0; u32DataIndex < EasyVariable_Data_Max_Number; u32DataIndex++)
	{
		if (strcmp(ps8Description, gtsEasyVariableDataArray[u32DataIndex].s8DataDescription) == 0)
		{
			s32DataIndexFind = u32DataIndex;
			break;
		}
	}

	return s32DataIndexFind;
}

/**********************************************************************************/
								/* global functions implement */
/**********************************************************************************/
/*
 * @function:	EasyVariableBaseWrite
 * data write base function
 * @param[in]	u32DataAddress			data address to be changed(destination)
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
void EasyVariableBaseWrite(EasyVariableBaseUint32_t u32DataIndex, void* pvodDataValue)
{
	void* pvDataAddress = 0;
	EasyVariableBaseUint32_t u32DataType = 0;

	/* 1 get information of variable */
	pvDataAddress = gtsEasyVariableDataArray[u32DataIndex].pvDataAddress;
	u32DataType = (EasyVariableBaseUint32_t)(gtsEasyVariableDataArray[u32DataIndex].teDataType);

	/* 2 write value into data */
	EasyVariableBaseMemcpy(pvDataAddress, pvodDataValue, sgu8DataTypeSizeArray[u32DataType]);
}

/*
 * @function:	EasyVariableBaseRead
 * data read base function
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
void EasyVariableBaseRead(EasyVariableBaseUint32_t u32DataIndex, void* pvodDataValue)
{
	void* pvDataAddress = 0;
	EasyVariableBaseUint32_t u32DataType = 0;

	/* 1 get information of variable */
	pvDataAddress = gtsEasyVariableDataArray[u32DataIndex].pvDataAddress;
	u32DataType = (EasyVariableBaseUint32_t)(gtsEasyVariableDataArray[u32DataIndex].teDataType);

	/* 2 get value from data */
	EasyVariableBaseMemcpy(pvodDataValue, pvDataAddress, sgu8DataTypeSizeArray[u32DataType]);
}

/*
 * @function:	EasyVariableBaseGetHandle
 * find data handler in variable array
 * @param[in]	ps8Description		data description
 * @param[out]	None
 * @retval		EasyVariableInt32_t		data index in variable array, if not find, return -1
 */
EasyVariableBaseInt32_t EasyVariableBaseGetHandle(EasyVariableBaseInt8_t* ps8Description)
{
	return EasyVariableBaseFindVariable(ps8Description);
}
