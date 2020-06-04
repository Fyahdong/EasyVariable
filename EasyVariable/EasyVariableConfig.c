#include "EasyVariable.h"

/* todo:Ôö¼Ó¶ÁÐ´¿ØÖÆ */

static EasyVariableBaseFloat_t f32Test = 101.2;
static EasyVariableBaseUint32_t u32Test = 3212;
static EasyVariableBaseInt32_t s32Test = 0;
static EasyVariableBaseUint16_t u16Test = 0;
static EasyVariableBaseInt16_t s16Test = 0;
static EasyVariableBaseUint8_t u8Test = 0;
static EasyVariableBaseInt8_t s8Test = 0;

const EasyVariableBaseDataStruct gtsEasyVariableDataArray[EasyVariable_Data_Max_Number] =
{
	{.pvDataAddress = (void*)(&f32Test), .teDataType = teEasyVairableBaseFloat_t, .s8DataDescription = "float", .u32DataIndex = 0},
	{.pvDataAddress = (void*)(&u32Test), .teDataType = teEasyVariableBaseUint32_t, .s8DataDescription = "uint32_t", .u32DataIndex = 1}
};
