#include "main.h"
/**
 * _strstr - function finds the first occurrence of the substring in the string
 * @needle: the substring
 * @haystack: the string
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, l;

	while (haystack[i] != '\0')
	{
		if (needle[0] == haystack[i])
		{
			for (l = i; needle[j] != '\0'; l++)
			{
				if (needle[j] != haystack[l])
				{
					break;
				}
				j++;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
