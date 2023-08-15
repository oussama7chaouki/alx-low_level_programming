#include "stdio.h"
/**
 * main - print all natural numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, prev1, prev2, prev3, sum;

	sum = 0;
	prev1 = 1;
	prev2 = 2;
	while (prev1 < 4000000)
	{
		if(prev1 % 2 == 0)
			sum +=prev1;
		prev3 = prev2;
		prev2 = prev1 + prev2;
		prev1 = prev3;
	}
	printf("%lu\n", sum);
	return (0);
}
