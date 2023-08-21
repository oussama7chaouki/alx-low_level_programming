#include "main.h"
/**
 * swap_int - swap the value of the two parametre
 * @a:first parametre
 * @b:second parametre
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
