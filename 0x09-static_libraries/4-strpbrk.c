#include "main.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 * @s: the buffer
 * @accept: substring
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
