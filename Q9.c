// Calculating decimal to binary numbers using recursion
#include <stdio.h>

unsigned long long bin(unsigned long long dec)
{
	// Use this image for logic:
	// https://cdn1.byjus.com/wp-content/uploads/2021/09/Decimal-to-binary.png
	if (dec < 2)
		return dec;
	else
		// Joining the remaining bin num and current bit
		return bin(dec/2) * 10 + (dec%2);
}

int main(void)
{
	unsigned long long n;
	do
	{
		printf("Enter a decimal whole number: ");
		scanf("%llu", &n);
	}
	while (n < 0);
	
	printf("Binary of %llu = %llu", n, bin(n));
	
	return 0;
}