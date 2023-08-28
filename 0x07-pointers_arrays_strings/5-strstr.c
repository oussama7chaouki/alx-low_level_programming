#include "main.h"
/**
 * _strstr - function finds the first occurrence of the substring in the string
 * @needle: the substring
 * @haystack: the string
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, l;

	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			for (l = i; needle[j] != '\0'; l++)
			{
				if (needle[j] != haystack[l])
					break;
				if (needle[j + 1] == '\0')
					return (haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
