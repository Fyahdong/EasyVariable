#include "stdio.h"

#include "EasyVariable.h"

int main(void)
{
	EasyVariableBaseUint32_t u32Test = 0;
	EasyVariableBaseFloat_t f32Test = 0;

	EasyVariableReadWithName("uint32_t", &u32Test);
	printf("f32Test = %d\n", u32Test);

	u32Test = 4219312;
	EasyVariableWriteWithName("uint32_t", &u32Test);
	u32Test = 0;
	EasyVariableReadWithName("uint32_t", &u32Test);
	printf("f32Test = %d\n", u32Test);

	return 0;
}
