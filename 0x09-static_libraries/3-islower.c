#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: character turn into it's ascii value
 *
 * Return: 0 if lowercase 1 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 127)
		return (1);
	else
		return (0);
}
