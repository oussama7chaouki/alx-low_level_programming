#include "main.h"

/**
 * print_last_digit -  computes the absolute value of an integer
 * @n: number gonna be computed
 *
 * Return: n last digit of absolute valure.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
	else
	{
		return ((n * -1) % 10);
	}
}
