#include <stdio.h>


int isprime(int n)
{
	int i;
	for (i = n-1; i >= 2; i--)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main(void)
{
	int limit;
	printf("Enter number of prime numbers: ");
	scanf("%d", &limit);
	
	int count = 0, num;
	for (num = 1, count = 1; count <= limit; num++)
	{
		if (isprime(num) == 1)
		{
			printf("%d\n", num);
			count++;
		}
	}
	
	return 0;
}