#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		j = str[i];
		if (j >= 97 && j <= 122)
		{
			j -= 32;
			str[i] = j;
		}
		i++;
	}
	return (str);
}
