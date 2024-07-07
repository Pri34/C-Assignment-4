#include <stdio.h>

void swap1(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swap2(int *p1, int *p2)
{
	int sum = *p1 + *p2;
	int diff = *p1 - *p2;
	*p2 = (sum+diff) / 2;
	*p1 = (sum-diff) / 2;
}

int main(void)
{
	int a, b, c, d;
	printf("Initially,\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	printf("d = ");
	scanf("%d", &d);
	
	// Swapping with temp var
	swap1(&a, &b);
	printf("\nFinally,\n");
	printf("a = %d\n", a);
	printf("b = %d\n\n", b);
	
	// Swapping without temp var
	swap2(&c, &d);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	
	return 0;
}