/**
* @file 		EasyVariable.c
* @brief		To provide a common function port to modify variables' value
* @author		dongdd
*/

/**********************************************************************************/
								/* include headers */
/**********************************************************************************/
#include "EasyVariable.h"

typedef void (*EasyVariableWrite)(EasyVariableUint32_t u32DataAddress, void* pvodDataValue);

/**********************************************************************************/
								/* static functions */
/**********************************************************************************/
static void EasyVariableInternalWriteInFloat(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableFloat_t *)(u32DataAddress)) = *((EasyVariableFloat_t *)(pvodDataValue));
}

static void EasyVariableInternalWriteInUint32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableUint32_t *)(u32DataAddress)) = *((EasyVariableUint32_t *)(pvodDataValue));
}

static void EasyVariableInternalWriteInInt32(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableInt32_t *)(u32DataAddress)) = *((EasyVariableInt32_t *)(pvodDataValue));
}

static void EasyVariableInternalWriteInUint16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableUint16_t *)(u32DataAddress)) = *((EasyVariableUint16_t *)(pvodDataValue));
}

static void EasyVariableInternalWriteInInt16(EasyVariableUint32_t u32DataAddress, void* pvodDataValue)
{
	*((EasyVariableInt16_t *)(u32DataAddress)) = *((EasyVariableInt16_t *)(pvodDataValue));
}

static void EasyVariableInternalWriteInType(EasyVariableUint32_t u32DataIndex, void *pvodDataValue, EasyVariableDataTypeEnum teDataType)
{
	/* 1 error check */
	EasyVariable_Assert((u32DataIndex >= EasyVariable_Data_Max_Number));
	EasyVariable_Assert((pvodDataValue == NULL));

	switch (teDataType)
	{
		case teEasyVairableFloat_t:
		{
			*(EasyVariableFloat_t*)(gtsEasyVariableDataArray[u32DataIndex].u32DataAddress) = *(EasyVariableFloat_t*)(pvodDataValue);
		}
		break;

		case teEasyVariableUint32_t:
		{
			
		}
	}
}

/**********************************************************************************/
								/* global functions */
/**********************************************************************************/
void EasyVariableWirte(EasyVariableUint32_t u32DataIndex, void *pvodDataValue)
{
	/* 1 error check */
	EasyVariable_Assert((u32DataIndex >= EasyVariable_Data_Max_Number));
	EasyVariable_Assert((pvodDataValue == NULL))


}


