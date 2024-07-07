#include <stdio.h>


void move(char start, char end)
{
	printf("\nMove topmost disk of %c -> %c", start, end);
}


void hanoi(int n, char start, char end, char other)
{
	
	if (n == 1)
	{
		// Moving one block
		move(start, end);
	}
	else
	{
		// To move 'n' blocks from start to end, we must:-
		// 1. Somehow move (n-1) blocks from start to the other rod (using end rod as helper)
		// 2. Move one leftover 'n'th i.e largest block from start to the end rod
		// 3. Somehow move the (n-1) blocks from the other rod to the end rod (using start rod as helper)
		hanoi(n-1, start, other, end);
		hanoi(1, start, end, other);
		hanoi(n-1, other, end, start);
	}
}


int main(void)
{
	int num;
	printf("Please enter the number of discs to move from A -> C: ");
	scanf("%d", &num);
	hanoi(num, 'A', 'C', 'B');
	printf("\n\nDone!\n");
	return 0;
}