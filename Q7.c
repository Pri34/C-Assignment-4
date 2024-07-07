#include <stdio.h>

int sum_of_digits(int n)
{
	if (n < 10)
		return n;
	else
		return (n % 10) + sum_of_digits(n / 10);
}


int main(void)
{
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Sum of digits of %d = %d\n", x, sum_of_digits(x));
	return 0;	
}