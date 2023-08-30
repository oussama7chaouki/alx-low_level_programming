#include "main.h"
/**
 * _strlen_recursion -  returns the length of a string.
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = 1 + _strlen_recursion(s + 1);
	}
		return (length);
}
/**
 * palindrome - check if s is palindrome.
 * @str: the string.
 * @a: direct imdex.
 * @b: reverse index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int palindrome(char *str, int a, int b)
{
	if (str[a] == str[b])
	{
		if (a <= b / 2)
			return (palindrome(str, a + 1, b - 1));
		return (1);
	}
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: the string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 0, _strlen_recursion(s) - 1));
}
