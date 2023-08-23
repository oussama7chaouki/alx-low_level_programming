#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: capitalizes string
 */

char *cap_string(char *str)
{
	int i = 0, j, l = 0;
	char sep[] = " \t\n{}(),;.!?\"";

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			j = str[i];
			if (j >= 97 && j <= 122)
			{
				j -= 32;
				str[i] = j;
			}
		}
		for (l = 0; l <= 12; l++)
		{
			if (str[i] == sep[l])
			{
				j = str[i + 1];
				if (j >= 97 && j <= 122)
				{
					j -= 32;
					str[i + 1] = j;
				}
				break;
			}
		}
		i++;
	}
	return (str);
}
