#include <stdio.h>


int increment()
{
	static int count;
	count += 1;
	return count;
}


float pi = 3.141592;

int main(void)
{
	printf("\nAUTO VARIABLE:-\n");
	auto int autoVar;
	printf("Automatic initial value = %d (Garbage value)\n", autoVar);
	printf("Address = %p\n", &autoVar);
	
	printf("\nSTATIC VARIABLE:-\n");
	static int staticVar;
	printf("Automatic initial value = %d\n", staticVar);
	printf("Address = %p\n", &staticVar);
	int value;
	value = increment();
	value = increment();
	value = increment();
	printf("Value after incrementing 3 times = %d\n", value);
	
	printf("\nREGISTER VARIABLE:-\n");
	register int regVar;
	printf("Automatic initial value = %d\n", regVar);
	printf("Address = ACCESS NOT ALLOWED BY COMPILER\n");
	
	printf("\nEXTERN VARIABLE:-\n");
	printf("Automatic initial value = SAME AS EXTERNAL VARIABLE\n");
	printf("Address = SAME AS EXTERNAL VARIABLE\n");
	extern float pi;
	printf("Digits of pi = %f\n", pi);
	
	// End of life of autoVar,regVar
	return 0;
}
// End of Life of extern variable 'pi'