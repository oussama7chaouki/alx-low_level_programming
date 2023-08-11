#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'print alphabet in lowercase, and then in uppercase'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i, j, l;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = i + 1 ; j < 9 ; j++)
		{
			for (l = j + 1 ; l < 10 ; l++)
			{
			putchar(i + '0');
			putchar(j + '0');
			putchar(l + '0');
			if (i == 7 && j == 8 && l == 9)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
