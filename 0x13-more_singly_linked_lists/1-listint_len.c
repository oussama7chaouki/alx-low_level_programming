#include "lists.h"
#include <stdio.h>

/**
 * print_listint - return the number of the elements of a linked list.
 * @h: head of linklist node
 * Return: the number of nodes
 */
size_t  listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
