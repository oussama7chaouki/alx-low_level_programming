#include "main.h"

/**
 * print_number - prints number using putchar
 * @n:the number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n >= 1000)
	{
		_putchar('0' + n / 1000);
		_putchar('0' + (n / 100) % 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
	else if (n >= 100)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
	else if (n >= 10)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('0' + n);
	}
}
