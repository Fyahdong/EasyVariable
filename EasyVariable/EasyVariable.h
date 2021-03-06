/**
* @file 		EasyVariable.h
* @brief		To provide a common function port to modify variables' value
* @author		dongdd
*/
#ifndef _EASYVARIABLE_H_
#define _EASYVARIABLE_H_

/**********************************************************************************/
								/* include headers */
/**********************************************************************************/
#include "EasyVariableBase.h"
#include "EasyVariableConfig.h"

/**********************************************************************************/
								/* function declaration */
/**********************************************************************************/
void EasyVariableInstallConfigData(EasyVariableBaseConfigDataStruct* ptsConfigData);
void EasyVariableWriteWithHandle(EasyVariableBaseInt32_t s32Handle, void* pvodDataValue);
void EasyVariableReadWithHandle(EasyVariableBaseInt32_t s32Handle, void* pvodDataValue);
EasyVariableBaseInt8_t EasyVariableWriteWithName(EasyVariableBaseInt8_t* ps8Description, void* pvodDataValue);
EasyVariableBaseInt8_t EasyVariableReadWithName(EasyVariableBaseInt8_t* ps8Description, void* pvodDataValue);
EasyVariableBaseInt32_t EasyVariableGetHandle(EasyVariableBaseInt8_t* ps8Description);

#endif
