#include <stdio.h>
#include <math.h>


unsigned long long bin(unsigned long long dec)
{
	unsigned long long bin_num = 0;
	unsigned long long i;
	int j;
	for (i = dec, j = 0; i > 0; i /= 2, j++)
	{
		// Adding the remainder of division TOWARDS THE LEFT of the bin num
		bin_num += (i%2) * pow(10, j);
	}
	return bin_num;
}


int main(void)
{
	// Input checking
	long long n;
	do
	{
		printf("Enter a whole decimal number: ");
		scanf("%lld", &n);
	}
	while (n < 0);
	
	printf("\n%lld in Binary = %llu", n, bin(n));
	
	return 0;
}