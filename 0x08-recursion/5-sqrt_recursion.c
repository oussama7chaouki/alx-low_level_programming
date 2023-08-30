#include "main.h"
/**
 * _sqrt_binary_search - finding the sqrt using binary search algo
 *
 * @n : input number
 * @sup: suuperior value in the array
 * @inf: inferior value in the array
 *
 * Return: square root of number given
*/
int _sqrt_binary_search(int n, int inf, int sup)
{
	long int half, half_squared;

	if(inf >= sup)
		return (-1);
	half = (sup + inf) / 2;
	half_squared = half * half;
	if (half_squared == n)
		return (half);
	if (half_squared < n)
		return (_sqrt_binary_search(n, half + 1, sup));
	else
		return (_sqrt_binary_search(n, inf, half - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: square root
*/
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (_sqrt_binary_search(n, 1, n));
}
