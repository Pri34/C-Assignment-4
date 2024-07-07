#include <stdio.h>


// To find lcm of 2 nums, see if each multiple of max is divisible by smaller num!
int lcm(int x, int y)
{
	int max = x > y ? x : y;
	int min = x < y ? x : y;
	int i, mult;
	for (i = max, mult = 1; i > 0; i = max * mult, mult++)
	{
		if (i % min == 0)
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
	printf("\nLCM of %d and %d = %d", a, b, lcm(a, b));
	return 0;
}