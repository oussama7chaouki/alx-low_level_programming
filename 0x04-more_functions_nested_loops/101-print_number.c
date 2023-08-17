#include "main.h"

/**
 * print_number - prints number using putchar
 * @n:the number to be printed
 */
void print_number(int n)
{
	int rec;

	rec = n;
	if (n < 0)
	{
		_putchar('-');
		rec = -rec;
	}
	if (rec / 10)
		print_number(rec / 10);
	_putchar('0' + rec % 10);
}
