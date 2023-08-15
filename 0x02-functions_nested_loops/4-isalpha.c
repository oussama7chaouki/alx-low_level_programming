#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 * @c: character turn into it's ascii value
 *
 * Return: 0 if lowercase 1 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 127) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
