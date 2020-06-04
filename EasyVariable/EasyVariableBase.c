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
static void EasyVariableBaseWriteInFloat(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseReadInFloat(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseWriteInUint32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseReadInUint32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseWriteInInt32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseReadInInt32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseWriteInUint16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseReadInUint16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseWriteInInt16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseReadInInt16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseWriteInUint8(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseReadInUint8(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseWriteInInt8(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);
static void EasyVariableBaseReadInInt8(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);

/**********************************************************************************/
								/* static variables */
/**********************************************************************************/
const EasyVariableReadWriteFunctionStruct tsEasyVariableFunction =
{
	.pfWrite =
	{
		EasyVariableBaseWriteInFloat,
		EasyVariableBaseWriteInUint32,
		EasyVariableBaseWriteInInt32,
		EasyVariableBaseWriteInUint16,
		EasyVariableBaseWriteInInt16,
		EasyVariableBaseWriteInUint8,
		EasyVariableBaseWriteInInt8
	},

	.pfRead =
	{
		EasyVariableBaseReadInFloat,
		EasyVariableBaseReadInUint32,
		EasyVariableBaseReadInInt32,
		EasyVariableBaseReadInUint16,
		EasyVariableBaseReadInInt16,
		EasyVariableBaseReadInUint8,
		EasyVariableBaseReadInInt8
	}
};

/**********************************************************************************/
								/* static functions implement */
/**********************************************************************************/
/*
 * @function:	EasyVariableBaseWriteInFloat
 * data write with float type
 * @param[in]	u32DataAddress			data address to be changed(destination)
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseWriteInFloat(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableFloat_t*)(u32DataAddress)) = *((EasyVariableFloat_t*)(pvodDataValue));
}

/*
 * @function:	EasyVariableBaseReadInFloat
 * data read with float type
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseReadInFloat(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableFloat_t*)(pvodDataValue)) = *((EasyVariableFloat_t*)(u32DataAddress));
}

/*
 * @function:	EasyVariableBaseWriteInUint32
 * data write with uint32 type
 * @param[in]	u32DataAddress			data address to be changed(destination)
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseWriteInUint32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableUint32_t*)(u32DataAddress)) = *((EasyVariableUint32_t*)(pvodDataValue));
}

/*
 * @function:	EasyVariableBaseReadInUint32
 * data read with uint32 type
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseReadInUint32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableUint32_t*)(pvodDataValue)) = *((EasyVariableUint32_t*)(u32DataAddress));
}

/*
 * @function:	EasyVariableBaseWriteInInt32
 * data write with int32 type
 * @param[in]	u32DataAddress			data address to be changed(destination)
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseWriteInInt32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableInt32_t*)(u32DataAddress)) = *((EasyVariableInt32_t*)(pvodDataValue));
}

/*
 * @function:	EasyVariableBaseReadInInt32
 * data read with int32 type
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseReadInInt32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableInt32_t*)(pvodDataValue)) = *((EasyVariableInt32_t*)(u32DataAddress));
}

/*
 * @function:	EasyVariableBaseWriteInUint16
 * data write with uint16 type
 * @param[in]	u32DataAddress			data address to be changed(destination)
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseWriteInUint16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableUint16_t*)(u32DataAddress)) = *((EasyVariableUint16_t*)(pvodDataValue));
}

/*
 * @function:	EasyVariableBaseReadInUint16
 * data read with uint16 type
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseReadInUint16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableUint16_t*)(pvodDataValue)) = *((EasyVariableUint16_t*)(u32DataAddress));
}

/*
 * @function:	EasyVariableBaseWriteInInt16
 * data write with int16 type
 * @param[in]	u32DataAddress			data address to be changed(destination)
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseWriteInInt16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableInt16_t*)(u32DataAddress)) = *((EasyVariableInt16_t*)(pvodDataValue));
}

/*
 * @function:	EasyVariableBaseReadInInt16
 * data read with int16 type
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseReadInInt16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableInt16_t*)(pvodDataValue)) = *((EasyVariableInt16_t*)(u32DataAddress));
}

/*
 * @function:	EasyVariableBaseWriteInUint8
 * data write with uint8 type
 * @param[in]	u32DataAddress			data address to be changed(destination)
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseWriteInUint8(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableUint8_t*)(u32DataAddress)) = *((EasyVariableUint8_t*)(pvodDataValue));
}

/*
 * @function:	EasyVariableBaseReadInUint8
 * data read with uint8 type
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseReadInUint8(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableUint8_t*)(pvodDataValue)) = *((EasyVariableUint8_t*)(u32DataAddress));
}

/*
 * @function:	EasyVariableBaseWriteInInt8
 * data write with int8 type
 * @param[in]	u32DataAddress			data address to be changed(destination)
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseWriteInInt8(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableInt8_t*)(u32DataAddress)) = *((EasyVariableInt8_t*)(pvodDataValue));
}

/*
 * @function:	EasyVariableBaseReadInInt8
 * data read with int8 type
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
static void EasyVariableBaseReadInInt8(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableInt8_t*)(pvodDataValue)) = *((EasyVariableInt8_t*)(u32DataAddress));
}

/*
 * @function:	EasyVariableBaseFindVariable
 * find data handler in variable array
 * @param[in]	ps8Description		data description
 * @param[out]	None
 * @retval		EasyVariableInt32_t		data index in variable array, if not find, return -1
 */
static EasyVariableInt32_t EasyVariableBaseFindVariable(EasyVariableInt8_t* ps8Description)
{
	EasyVariableInt32_t s32DataIndexFind = -1;

	for (EasyVariableUint32_t u32DataIndex = 0; u32DataIndex < EasyVariable_Data_Max_Number; u32DataIndex++)
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
void EasyVariableBaseWrite(EasyVariableUint32_t u32DataIndex, void* pvodDataValue)
{
	EasyVariableUint32_t u32DataAddress = 0;
	EasyVariableUint32_t u32DataWriteFuntionType = 0;

	/* 1 get information of variable */
	u32DataAddress = gtsEasyVariableDataArray[u32DataIndex].u32DataAddress;
	u32DataWriteFuntionType = (EasyVariableUint32_t)(gtsEasyVariableDataArray[u32DataIndex].teDataType);

	/* 2 write value into data */
	tsEasyVariableFunction.pfWrite[u32DataWriteFuntionType](u32DataAddress, pvodDataValue);
}

/*
 * @function:	EasyVariableBaseRead
 * data read base function
 * @param[in]	u32DataAddress			data address to be read(source)
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
void EasyVariableBaseRead(EasyVariableUint32_t u32DataIndex, void* pvodDataValue)
{
	EasyVariableUint32_t u32DataAddress = 0;
	EasyVariableUint32_t u32DataWriteFuntionType = 0;

	/* 1 get information of variable */
	u32DataAddress = gtsEasyVariableDataArray[u32DataIndex].u32DataAddress;
	u32DataWriteFuntionType = (EasyVariableUint32_t)(gtsEasyVariableDataArray[u32DataIndex].teDataType);

	/* 2 get value from data */
	tsEasyVariableFunction.pfRead[u32DataWriteFuntionType](u32DataAddress, pvodDataValue);
}

/*
 * @function:	EasyVariableBaseGetHandle
 * find data handler in variable array
 * @param[in]	ps8Description		data description
 * @param[out]	None
 * @retval		EasyVariableInt32_t		data index in variable array, if not find, return -1
 */
EasyVariableInt32_t EasyVariableBaseGetHandle(EasyVariableInt8_t* ps8Description)
{
	return EasyVariableBaseFindVariable(ps8Description);
}
