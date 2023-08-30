#include "main.h"
/**
 * prime_rec - checks to see if number is prime
 * @n: number
 * @div:divider
 * Return: 1 or 0
 */
int prime_rec(int n, int div)
{
	if (n < 2 || n % div == 0)
		return (0);
	if (div > n / 2)
		return (1);
	else
		return (prime_rec(n, div + 1));
}

/**
 * is_prime_number - check for prime number
 * @n:int
 * Return:1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_rec(n, 2));
}
