#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at index postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nod, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		nod = *head;
		for (i = 0; i < idx - 1 && nod != NULL; i++)
		{
			nod = nod->next;
		}
		if (nod == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = nod->next;
	nod->next = new;
	return (new);
}
