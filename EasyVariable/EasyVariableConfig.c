#include "EasyVariable.h"

/* todo:Ôö¼Ó¶ÁÐ´¿ØÖÆ */

static EasyVariableFloat_t f32Test = 0;
static EasyVariableUint32_t u32Test = 0;
static EasyVariableInt32_t s32Test = 0;
static EasyVariableUint16_t u16Test = 0;
static EasyVariableInt16_t s16Test = 0;
static EasyVariableUint8_t u8Test = 0;
static EasyVariableInt8_t s8Test = 0;

EasyVariableDataStruct gtsEasyVariableDataArray[EasyVariable_Data_Max_Number] =
{
	{.u32DataAddress = (EasyVariableUint32_t)(&f32Test), .teDataType = teEasyVairableFloat_t, .s8DataDescription = "float", .u32DataIndex = 0},
	{.u32DataAddress = (EasyVariableUint32_t)(&u32Test), .teDataType = teEasyVariableUint32_t, .s8DataDescription = "uint32_t", .u32DataIndex = 1}
};
