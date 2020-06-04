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
 * @function:	EasyVariableWirte
 * data write application function
 * @param[in]	u32DataIndex			the index of data in data matrix
 * @param[in]	pvodDataValue			pointer to the value(source)
 * @param[out]	None
 * @retval		None
 */
void EasyVariableWirte(EasyVariableBaseUint32_t u32DataIndex, void *pvodDataValue)
{
	/* 1 error check */
	EasyVariable_Assert((u32DataIndex >= EasyVariable_Data_Max_Number));
	EasyVariable_Assert((pvodDataValue == NULL));

	/* 2 run function */
	EasyVariableBaseWrite(u32DataIndex, pvodDataValue);
}

/*
 * @function:	EasyVariableRead
 * data read application function
 * @param[in]	u32DataIndex			the index of data in data matrix
 * @param[in]	pvodDataValue			pointer to the value(destination)
 * @param[out]	None
 * @retval		None
 */
void EasyVariableRead(EasyVariableBaseUint32_t u32DataIndex, void* pvodDataValue)
{
	/* 1 error check */
	EasyVariable_Assert((u32DataIndex >= EasyVariable_Data_Max_Number));
	EasyVariable_Assert((pvodDataValue == NULL));

	/* 2 run function */
	EasyVariableBaseRead(u32DataIndex, pvodDataValue);
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
	EasyVariable_Assert((ps8Description == NULL));

	return EasyVariableBaseGetHandle(ps8Description);
}

