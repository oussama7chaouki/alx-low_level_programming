#include "main.h"
#include "stdio.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n:starting number
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (j != 0)
				_putchar(' ');
			if (prod >= 100)
			{
				_putchar('0' + prod / 100);
				_putchar('0' + (prod / 10) % 10);
				_putchar('0' + (prod % 100) % 10);
			}
			else if (prod >= 10)
			{
				_putchar(' ');
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
			else
			{
				if (j != 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar('0' + prod);
			}
			if (j == n)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}
