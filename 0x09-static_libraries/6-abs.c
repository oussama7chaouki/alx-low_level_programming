#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 * @n: number gonna be computed
 *
 * Return: n absolute valure.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
