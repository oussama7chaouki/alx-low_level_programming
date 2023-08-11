#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'prints all possible combinations of two two-digit numbers'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i, j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			if (i >= j)
				continue;
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i == 98 && j == 99)
				continue;
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
