#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Description: 'print alphabet in lowercase, and then in uppercase'
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char c;

	for (c = 'a' ; c < 'e' ; c++)
		putchar(c);
	for (c = 'l' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
