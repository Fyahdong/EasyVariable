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
								/* macro */
/**********************************************************************************/
#define EasyVariableBase_Assert(bFlag, Return)			if(bFlag){return Return;}

/**********************************************************************************/
								/* variable type */
/**********************************************************************************/
typedef float EasyVariableBaseFloat_t;
typedef unsigned int EasyVariableBaseUint32_t;
typedef signed int EasyVariableBaseInt32_t;
typedef unsigned short EasyVariableBaseUint16_t;
typedef signed short EasyVariableBaseInt16_t;
typedef unsigned char EasyVariableBaseUint8_t;
typedef signed char EasyVariableBaseInt8_t;

/**********************************************************************************/
								/* enum type */
/**********************************************************************************/
/* data type enum */
typedef enum
{

	teEasyVairableBaseFloat_t = 0,
	teEasyVariableBaseUint32_t = 1,
	teEasyVariableBaseInt32_t = 2,
	teEasyVariableBaseUint16_t = 3,
	teEasyVariableBaseInt16_t = 4,
	teEasyVariableBaseUint8_t = 5,
	teEasyVariableBaseInt8_t = 6,

	teEasyVairableBaseMaxTypeNumber = 6

}EasyVariableBaseDataTypeEnum;

/**********************************************************************************/
								/* structure type */
/**********************************************************************************/
/* data information struct */
typedef struct
{

	void*							pvDataAddress;										/* data address */
	EasyVariableBaseDataTypeEnum	teDataType;											/* data type */
	EasyVariableBaseInt8_t			s8DataDescription[EasyVariable_Name_Max_Length];	/* data description name */
	EasyVariableBaseUint32_t		u32DataIndex;										/* data index in data array */

}EasyVariableBaseDataStruct;

/**********************************************************************************/
								/* variable declaration */
/**********************************************************************************/
extern const EasyVariableBaseDataStruct gtsEasyVariableDataArray[EasyVariable_Data_Max_Number];

/**********************************************************************************/
								/* function declaration */
/**********************************************************************************/
void EasyVariableBaseWrite(EasyVariableBaseInt32_t u32DataIndex, void* pvodDataValue);
void EasyVariableBaseRead(EasyVariableBaseInt32_t u32DataIndex, void* pvodDataValue);
EasyVariableBaseInt32_t EasyVariableBaseGetHandle(EasyVariableBaseInt8_t* ps8Description);

#endif
