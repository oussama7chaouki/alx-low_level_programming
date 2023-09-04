#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: the source string
 * Return: returns a pointer to the copy string.
 */
char *_strdup(char *str)
{
	char *duplic;
	int i, length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplic[i] = str[i];
	duplic[length] = '\0';

	return (duplic);
}
