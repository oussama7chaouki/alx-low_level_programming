#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s:the string
 */
void print_rev(char *s)
{
	int size, i;

	size = 0;
	while (s[size] != '\0')
	{
		size++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
