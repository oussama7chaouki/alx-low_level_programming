#include "main.h"
/**
* reverse -reverse an array
* @r: array
* @n: size of array
* Return: array reversed
*/
char *reverse(char *r, int n)
{
	int j, temp;

	for (j = 0; j < n; n--, j++)
	{
		temp = r[n];
		r[n] = r[j];
		r[j] = temp;
	}
	return (r);
}
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size1 = 0, size2 = 0, k, rest = 0, n;

	while (n1[size1] != '\0')
		size1++;
	while (n2[size2] != '\0')
		size2++;
	if (size2 > size_r || size1 > size_r)
		return (0);
	for (size1 -= 1, size2 -= 1, k = 0; k < size_r - 1; size1--, size2--, k++)
	{
		n = rest;
		if (size1 < 0 && size2 < 0 && n == 0)
			break;
		if (size1 >= 0)
			n += n1[size1] - 48;
		if (size2 >= 0)
			n += n2[size2] - 48;
		rest = n / 10;
		r[k] = n % 10 + 48;
	}
	r[k] = '\0';
	if (rest || size1 >= 0 || size2 >= 0)
		return (0);
	return (reverse(r, k - 1));
}
