#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to a concate string pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, length1, length2, length;
	char *array;

	len1 = len2 = 0;

	if (s1)
	{
		for (length1 = 0; s1[length1] != '\0'; length1++)
		{
		}
	}

	if (s2)
	{
		for (length2 = 0; s2[length2] != '\0'; length2++)
		{
		}
	}

	length = length1 + length2;
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		array[i] = s1[i];
	for (j = 0; j < length2; j++, i++)
		array[i] = s2[j];
	array[len] = '\0';

	return (array);
}
