/**
* @file 		EasyVariable.c
* @brief		To provide a common function port to modify variables' value
* @author		dongdd
*/

/**********************************************************************************/
								/* include headers */
/**********************************************************************************/
#include "EasyVariable.h"

#include "EasyVariableBase.h"

/**********************************************************************************/
								/* global functions implement */
/**********************************************************************************/
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

void EasyVariableWriteWithHandle(EasyVariableBaseInt32_t s32Handle, void* pvodDataValue)
{
	EasyVariableBaseWrite(s32Handle, pvodDataValue);
}

void EasyVariableReadWithHandle(EasyVariableBaseInt32_t s32Handle, void* pvodDataValue)
{
	EasyVariableBaseRead(s32Handle, pvodDataValue);
}

/*
 * @function:	EasyVariableWirte
 * data write application function
 * @param[in]	u32DataIndex			the index of data in data matrix
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
EasyVariableBaseInt8_t EasyVariableWriteWithName(EasyVariableBaseInt8_t* ps8Description, void *pvodDataValue)
{
	EasyVariableBaseInt8_t s8Status = -1;
	EasyVariableBaseInt32_t s32DataHandle = 0;

	/* 1 get handle of variable */
	s32DataHandle = EasyVariableGetHandle(ps8Description);

	if (s32DataHandle == -1)
	{
		return s8Status;
	}

	/* 2 run function */
	EasyVariableWriteWithHandle(s32DataHandle, pvodDataValue);

	return s8Status;
}

/*
 * @function:	EasyVariableRead
 * data read application function
 * @param[in]	u32DataIndex			the index of data in data matrix
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
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

	/* 2 run function */
	EasyVariableReadWithHandle(s32DataHandle, pvodDataValue);

	return s8Status;
}



