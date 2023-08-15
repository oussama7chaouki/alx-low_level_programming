#include "main.h"
#include "stdio.h"
/**
 * print_nature - print all natural numbers 
 * 
 * Return: Always 0.
 */
void print_nature()
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d", sum);
}
