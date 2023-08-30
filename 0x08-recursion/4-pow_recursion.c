#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the number
 * @y: the power
 * Return: the value of number raised by the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
