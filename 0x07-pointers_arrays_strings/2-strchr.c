#include "main.h"
/**
 * _strchr -  locates a character in a string
 * @s: the buffer
 * @c: the character
 * Return: pointer to the first occurrence of the character c, or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0, exist = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			exist = 1;
			break;
		}
		i++;
	}
	if (exist)
		return (s + i);
	return (NULL);
}
