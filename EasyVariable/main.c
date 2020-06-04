#include "stdio.h"

#include "EasyVariable.h"

int main(void)
{
	EasyVariableBaseUint32_t u32Test = 0;
	EasyVariableBaseFloat_t f32Test = 0;

	EasyVariableBaseInt32_t s32TestHandle = 0;

	EasyVariableBaseConfigDataStruct tsConfigData = { 0 };

	tsConfigData.ptsConfigAddress = gtsEasyVariableDataArray;
	tsConfigData.s32ConfigSize = sizeof(gtsEasyVariableDataArray) / sizeof(EasyVariableBaseDataStruct);

	EasyVariableInstallConfigData(&tsConfigData);

	//s32TestHandle = EasyVariableGetHandle("uint32_t");
	//EasyVariableReadWithHandle(s32TestHandle, &u32Test);
	EasyVariableReadWithName("float", &f32Test);
	printf("f32Test = %lf\n", f32Test);

	f32Test = 4219312;
	EasyVariableWriteWithName("float", &f32Test);
	f32Test = 0;
	EasyVariableReadWithName("float", &f32Test);
	printf("f32Test = %lf\n", f32Test);

	return 0;
}
