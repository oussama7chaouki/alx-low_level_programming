#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linkedlist
 * @head: the head of the list
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
