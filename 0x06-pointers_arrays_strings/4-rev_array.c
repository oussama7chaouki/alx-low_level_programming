#include "main.h"
/**
 * reverse_array - reverse the given array
 * @a:array gonna be reversed
 * @n:the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, b;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
	}
}
