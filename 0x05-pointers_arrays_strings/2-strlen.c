#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s:the string
 * Return: length of string.
 */
int _strlen(char *s)
{
	int size;

	while (*s != '\0')
{
		size++;
		s++;
}
	return (size);
}
