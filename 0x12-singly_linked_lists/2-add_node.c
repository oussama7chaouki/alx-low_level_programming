#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @s:the string
 * Return: length of string.
 */
int _strlen(const char *s)
{
	int size;

	for (size = 0; *s++; size++)
	{
	}
	return (size);
}
/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
