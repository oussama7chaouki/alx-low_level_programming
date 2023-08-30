#include "main.h"
/**
 * compare_strings - determine if two strings are a match.
 * @string1: the first string.
 * @string2: the second string.
 * @index1: current index in the first string.
 * @index2: current index in the second string. (wildcard)
 * Return: 1 if both strings match, 0 otherwise.
 */
int compare_strings(char *string1, char *string2, int index1, int index2)
{
	if (string1[index1] == '\0' && string2[index2] == '\0')
		return (1);
	if (string1[index1] == string2[index2])
	return (compare_strings(string1, string2, index1 + 1, index2 + 1));
	if (string1[index1] == '\0' && string2[index2] == '*')
		return (compare_strings(string1, string2, index1, index2 + 1));
	if (string2[index2] == '*')
		return (compare_strings(string1, string2, index1 + 1, index2) ||
			compare_strings(string1, string2, index1, index2 + 1));
	return (0);
}

/**
 * wildcmp - determine if two strings match considering wildcards.
 * @s1: the first string.
 * @s2: the second string.
 * Return: 1 if strings match, taking wildcards into account.
 */
int wildcmp(char *s1, char *s2)
{
	return (compare_strings(str1, str2, 0, 0));
}
