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
	int i, j, l, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 9 ; j++)
		{
			for (l = 0 ; l < 10 ; l++)
			{
				for (k = 0 ; k < 10 ; k++)
				{
					if (i > l)
						continue;
					if (i == l)
					{
						if (j >= k)
							continue;
					}
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(l + '0');
					putchar(k + '0');
					if (i == 9 && j == 8 && l == 9 && k == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
