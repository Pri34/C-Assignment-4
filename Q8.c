#include <stdio.h>

int fibonacci(int n)
{
	// Returns 'n'th term of the Fibonnaci series	
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else if (n > 1)
		return fibonacci(n-1) + fibonacci(n-2);
}

int main(void)
{
	// Error checking user's input
	int terms;
	do
	{
		printf("Enter number of terms in fibonacci series: ");
		scanf("%d", &terms);
	}
	while (terms <= 0);	
	printf("\n");
	
	// Printing the Fibonacci series
	int i;
	for (i = 1; i <= terms; i++)
	{
		printf("%d\n", fibonacci(i));
	}

	return 0;
}