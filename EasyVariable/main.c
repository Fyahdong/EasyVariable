#include "stdio.h"

#include "EasyVariable.h"

int main(void)
{
	EasyVariableBaseUint32_t u32Test = 0;
	EasyVariableBaseFloat_t f32Test = 0;

	EasyVariableBaseInt32_t s32TestHandle = 0;

	s32TestHandle = EasyVariableGetHandle("uint32_t");
	EasyVariableReadWithHandle(s32TestHandle, &u32Test);
	//EasyVariableReadWithName("uint32_t", &u32Test);
	printf("f32Test = %d\n", u32Test);

	u32Test = 4219312;
	EasyVariableWriteWithHandle(s32TestHandle, &u32Test);
	//EasyVariableWriteWithName("uint32_t", &u32Test);
	u32Test = 0;
	EasyVariableReadWithHandle(s32TestHandle, &u32Test);
	printf("f32Test = %d\n", u32Test);

	return 0;
}
