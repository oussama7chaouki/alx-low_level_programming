#include "main.h"
/**
 * _strncat - appends the src string to the dest
 * @src:first string
 * @dest:second string
 * @n:number of byte
 * Return: concate string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int size = 0, i = 0;

	while (dest[i] != '\0')
	{
		size++;
		i++;
	}
	i = 0;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[size++] = src[i];
	}
	dest[size] = '\0';
	return (dest);
}
