#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *nod, *nod1;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nod1 = (*head)->next;
		free(*head);
		*head = nod1;
		return (1);
	}
	nod = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (nod->next == NULL)
			return (-1);
		nod = nod->next;
	}
	nod1 = nod->next;
	nod->next = nod1->next;
	free(nod1);
	return (1);

}
