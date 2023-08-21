#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @s:the string
 */
void _puts(char *str)
{
	int size;

	for (size = 0; *str++; size++)
	{
		_putchar(*(str - 1));
	}
	_putchar('\n');
}
