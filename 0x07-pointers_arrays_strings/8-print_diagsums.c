#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: square matrix of integers
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int j, i, sum1 = 0, sum2 = 0;

	for (j = 0, i = size - 1; j < size; j++, i--)
	{
		sum1 += a[size * j + j];
		sum2 += a[size * i + j];
	}
	printf("%d, %d\n", sum1, sum2);
}
