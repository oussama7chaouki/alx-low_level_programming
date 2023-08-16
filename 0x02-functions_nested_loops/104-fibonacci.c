#include "stdio.h"
/**
 * main - print all natural numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long prev1, prev2, sum;
	unsigned long prev1_half1, prev1_half2, prev2_half1, prev2_half2;
	unsigned long half1, half2;

	prev1 = 0;
	prev2 = 1;
	for (i = 0; i < 92; i++)
	{
		sum = prev1 + prev2;
		printf("%lu", sum);
		printf(", ");
		prev1 = prev2;
		prev2 = sum;	
	}
	prev1_half1 = prev1 / 10000000000;
	prev2_half1 = prev2 / 10000000000;
	prev1_half2 = prev1 % 10000000000;
	prev2_half2 = prev2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		half1 = prev1_half1 + prev2_half1;
		half2 = prev1_half2 + prev2_half2;
		if (prev1_half2 + prev2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 98)
			printf(", ");
		prev1_half1 = prev2_half1;
		prev1_half2 = prev2_half2;
		prev2_half1 = half1;
		prev2_half2 = half2;
	}
	printf("\n");
	return (0);
}
