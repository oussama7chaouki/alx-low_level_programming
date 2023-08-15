#include "main.h"
/**
 * print_last_digit -  computes the absolute value of an integer
 * @n: number gonna be computed
 *
 * Return: n last digit of absolute valure.
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (n >= 0)
	{
		_putchar('0' + d);
		return (d);
	}
	else
	{
		_putchar('0' + d * -1);
		return (d * -1);
	}
}
