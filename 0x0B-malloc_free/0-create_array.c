#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it.
 * @size: the size of the array
 * @c: initial value
 * Return: a pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
