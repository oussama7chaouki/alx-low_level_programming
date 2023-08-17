#include <stdio.h>
#include <math.h>
/**
 * main - prints the numbers from 1 to 100
 * Return: always 0
 */
int main(void)
{
	long int n, i, p = -1;

	n = 612852475143;
	if (n % 2 == 0)
	{
		p = 2;
		while (n % 2 == 0)
			n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			p = i;
			n = n / i;
		}
	}
	if (n > 2)
		p = n;
	printf("%ld\n", p);
	return (0);
}
