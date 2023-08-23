#include "main.h"
/**
 * _strncpy - copy src to dest
 * @src:first string
 * @dest:second string
 * @n:number of byte
 * Return: the copy string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
