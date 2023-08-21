#include "main.h"
/**
 * puts_half - prints a string, followed by a new line
 * @str:the string
 */
void puts_half(char *str)
{
	int size = 0, i;

	while (str[size] != '\0')
		size++;
	i = (size - 1) / 2;
	if (size % 2 == 0)
		i = (size) / 2;
	for (; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
