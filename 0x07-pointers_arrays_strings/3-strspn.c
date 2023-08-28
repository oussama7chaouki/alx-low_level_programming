#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 * @s: the buffer
 * @accept: substring
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j,exist = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				exist = 1;
			j++;
		}
		if(exist == 0)
			break;
		i++;
		exist = 0;
	}
	return (i);
}
