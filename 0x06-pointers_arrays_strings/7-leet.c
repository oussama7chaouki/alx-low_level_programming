#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: string encoded
 */
char *leet(char *str)
{
	int number[] = {4, 3, 0, 7, 1};
	char *letter = "aAeEoOtTlL";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 10; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = '0' + number[j / 2];
			}
		}

		i++;
	}
	return (str);
}
