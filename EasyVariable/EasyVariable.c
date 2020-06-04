/**
* @file 		EasyVariable.c
* @brief		To provide a common function port to modify variables' value
* @author		dongdd
*/

/**********************************************************************************/
								/* include headers */
/**********************************************************************************/
#include "EasyVariable.h"

/**********************************************************************************/
								/* global functions implement */
/**********************************************************************************/
/*
 * @function:	EasyVariableInstallConfigData
 * install config data information
 * @param[in]	ptsConfigData		pointer to config data
 * @param[out]	None
 * @retval		None
 */
void EasyVariableInstallConfigData(EasyVariableBaseConfigDataStruct* ptsConfigData)
{
	EasyVariableBaseConfigInstall(ptsConfigData);
}

/*
 * @function:	EasyVariableGetHandle
 * get variable handle
 * @param[in]	ps8Description		data description
 * @param[out]	None
 * @retval		EasyVariableInt32_t		data handle, if not find, return -1
 */
EasyVariableBaseInt32_t EasyVariableGetHandle(EasyVariableBaseInt8_t* ps8Description)
{
	return EasyVariableBaseGetHandle(ps8Description);
}

/*
 * @function:	EasyVariableWriteWithHandle
 * write operation with variable handle
 * @param[in]	s32Handle		variable handle
 * @param[in]	pvodDataValue	data value to be written(source)
 * @param[out]	None
 * @retval		None
 */
void EasyVariableWriteWithHandle(EasyVariableBaseInt32_t s32Handle, void* pvodDataValue)
{
	EasyVariableBaseWrite(s32Handle, pvodDataValue);
}

/*
 * @function:	EasyVariableReadWithHandle
 * read operation with variable handle
 * @param[in]	s32Handle		variable handle
 * @param[in]	pvodDataValue	pointer to store read data value(destination)
 * @param[out]	None
 * @retval		None
 */
void EasyVariableReadWithHandle(EasyVariableBaseInt32_t s32Handle, void* pvodDataValue)
{
	EasyVariableBaseRead(s32Handle, pvodDataValue);
}

/*
 * @function:	EasyVariableWriteWithName
 * data write application function with variable description
 * @param[in]	ps8Description			variable description
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		EasyVariableBaseInt8_t		-1		can't find variable in table
											0		ok
 */
EasyVariableBaseInt8_t EasyVariableWriteWithName(EasyVariableBaseInt8_t* ps8Description, void* pvodDataValue)
{
	EasyVariableBaseInt8_t s8Status = -1;
	EasyVariableBaseInt32_t s32DataHandle = 0;

	/* 1 get handle of variable */
	s32DataHandle = EasyVariableGetHandle(ps8Description);

	if (s32DataHandle == -1)
	{
		return s8Status;
	}
	s8Status = 0;

	/* 2 run function */
	EasyVariableWriteWithHandle(s32DataHandle, pvodDataValue);

	return s8Status;
}

/*
 * @function:	EasyVariableRead
 * data read application function
 * @param[in]	ps8Description			variable description
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		EasyVariableBaseInt8_t		-1		can't find variable in table
											0		ok
 */
EasyVariableBaseInt8_t EasyVariableReadWithName(EasyVariableBaseInt8_t* ps8Description, void* pvodDataValue)
{
	EasyVariableBaseInt8_t s8Status = -1;
	EasyVariableBaseInt32_t s32DataHandle = 0;

	/* 1 get handle of variable */
	s32DataHandle = EasyVariableGetHandle(ps8Description);

	if (s32DataHandle == -1)
	{
		return s8Status;
	}
	s8Status = 0;

	/* 2 run function */
	EasyVariableReadWithHandle(s32DataHandle, pvodDataValue);

	return s8Status;
}



