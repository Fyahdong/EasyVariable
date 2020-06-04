/**
* @file 		EasyVariableBase.h
* @brief		variable base function implement
* @author		dongdd
*/

#ifndef _EASYVARIABLEBASE_H_
#define _EASYVARIABLEBASE_H_

/**********************************************************************************/
								/* include headers */
/**********************************************************************************/
#include "stdio.h"

#include "EasyVariableConfig.h"

/**********************************************************************************/
								/* variable type */
/**********************************************************************************/
typedef float EasyVariableFloat_t;
typedef unsigned int EasyVariableUint32_t;
typedef signed int EasyVariableInt32_t;
typedef unsigned short EasyVariableUint16_t;
typedef signed short EasyVariableInt16_t;
typedef unsigned char EasyVariableUint8_t;
typedef signed char EasyVariableInt8_t;

/**********************************************************************************/
								/* enum type */
/**********************************************************************************/
/* data type enum */
typedef enum
{

	teEasyVairableFloat_t = 0,
	teEasyVariableUint32_t = 1,
	teEasyVariableInt32_t = 2,
	teEasyVariableUint16_t = 3,
	teEasyVariableInt16_t = 4,
	teEasyVariableUint8_t = 5,
	teEasyVariableInt8_t = 6,

	teEasyVairableMaxTypeNumber = 6

}EasyVariableDataTypeEnum;

/**********************************************************************************/
								/* structure type */
/**********************************************************************************/
/* data information struct */
typedef struct
{

	void*						pvDataAddress;										/* data address */
	EasyVariableDataTypeEnum	teDataType;											/* data type */
	EasyVariableInt8_t			s8DataDescription[EasyVariable_Name_Max_Length];	/* data description name */
	EasyVariableUint32_t		u32DataIndex;										/* data index in data array */

}EasyVariableDataStruct;

/**********************************************************************************/
								/* variable declaration */
/**********************************************************************************/
extern EasyVariableDataStruct gtsEasyVariableDataArray[EasyVariable_Data_Max_Number];

/**********************************************************************************/
								/* function declaration */
/**********************************************************************************/
void EasyVariableBaseWrite(EasyVariableUint32_t u32DataIndex, void* pvodDataValue);
void EasyVariableBaseWrite(EasyVariableUint32_t u32DataIndex, void* pvodDataValue);
EasyVariableInt32_t EasyVariableBaseGetHandle(EasyVariableInt8_t* ps8Description);

#endif
