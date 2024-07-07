#include <stdio.h>

int fact(int x);

int main(void)
{
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	b = fact(a);
	printf("(%d)! = %d", a, b);
	return 0;
}

int fact(int x)
{
	if (x == 0)
		return 1;
	else
		return x*fact(x-1);
}