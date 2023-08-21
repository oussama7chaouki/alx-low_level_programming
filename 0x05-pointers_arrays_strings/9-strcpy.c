#include "main.h"
/**
 * _strcpy -  copies the string pointed to by src to dest
 * @src:source
 * @dest:destination
 * Return:return the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *src++; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0'
	return (dest);
}
