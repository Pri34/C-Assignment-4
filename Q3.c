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
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if (isprime(a) == 1)
	{
		printf("%d is a prime number.", a);
	}
	else
	{
		printf("%d is not a prime number.", a);
	}
	return 0;
}