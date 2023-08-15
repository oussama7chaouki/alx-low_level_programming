#include "main.h"

/**
 * print_sign -  prints the sign of a number
 * @n: number gonna be checked
 *
 * Return: 0 if greater than zero 1 if zero and -1 otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
