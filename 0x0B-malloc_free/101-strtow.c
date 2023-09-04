#include <stdlib.h>
#include <stdbool.h>

void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: the string
 * Return: returns a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, len, word_length = 0, index_word;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0, len = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			len++;
			if (i == 0 || str[i - 1] == ' ')
				word_length++;
		}
	}

	if (len == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (word_length + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			int start = i;
			int word_len = 0;

			while (str[i] && str[i] != ' ')
			{
				word_len++;
				i++;
			}
			create_word(words, str, start, start + word_len, index_word);
			index_word++;
		}
	}

	words[word_length] = NULL;
	return (words);
}

/**
 * create_word - creates a word and inserts it into the array
 * @words: the array of strings
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		words[index][j] = str[start];
	words[index][j] = '\0';
}

