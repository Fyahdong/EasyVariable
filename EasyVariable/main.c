#include "stdio.h"

#include "EasyVariable.h"

int main(void)
{
	EasyVariableUint32_t u32Test = 0;
	EasyVariableFloat_t f32Test = 0;
	EasyVariableInt32_t f32TestHandle = 0;

	f32TestHandle = EasyVariableGetHandle("float_t");

	EasyVariableRead(f32TestHandle, &f32Test);
	printf("f32Test = %lf\n", f32Test);

	f32Test = 3.12312312;
	EasyVariableWirte(0, &f32Test);
	f32Test = 0;
	EasyVariableRead(0, &f32Test);
	printf("f32Test = %lf\n", f32Test);

	return 0;
}
