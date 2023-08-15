#include "main.h"
#include "stdio.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n:starting number
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			{
				if (i * j >= 100)
					printf(" ");
				else if (i * j >= 10)
					printf("  ");
				else
					printf("   ");
			}
			printf("%d", i * j);
			if (j == n)
				continue;
			printf(",");
		}
		printf("\n");
	}
}
