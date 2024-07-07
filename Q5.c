#include <stdio.h>


// To find hcf/gcd, see whether a num (<= min val) divides both x & y !!!
int hcf(int x, int y)
{
	int min = x < y ? x : y;
	int i;
	for (i = min; i >= 1; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			return i;
		}
	}
}


int main(void)
{
	int a, b;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	printf("\nHCF of %d and %d = %d", a, b, hcf(a, b));
	return 0;
}