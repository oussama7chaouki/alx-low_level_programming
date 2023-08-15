#include "stdio.h"
/**
 * main - print all natural numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, prev1, prev2, prev3;

	prev1 = 1;
	prev2 = 2;
	for (i = 0; i < 50; i++)
	{
		printf("%d,", prev1);
		prev3 = prev2;
		prev2 = prev1 + prev2;
		prev1 = prev3;
	}
	printf("\n");
	return (0);
}
