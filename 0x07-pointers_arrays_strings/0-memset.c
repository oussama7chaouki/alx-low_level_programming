#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * @s: the buffer
 * @n: number of bytes
 * @b: char to replace in buffer
 * Return: the buffer pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
