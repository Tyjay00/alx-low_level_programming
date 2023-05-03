#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: The pointer to the first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
