#include "main.h"
/**
 * rev_string - reverses a string.
 * @s:the string
 */
void rev_string(char *s)
{
	int size, i, j;
	char t;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}

	for (i = size - 1, j = 0; i >= (size - 1) / 2; i--, j++)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
