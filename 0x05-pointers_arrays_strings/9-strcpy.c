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

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	return (dest);
}
