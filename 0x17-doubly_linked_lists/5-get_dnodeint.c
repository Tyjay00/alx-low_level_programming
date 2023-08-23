#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node from a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
	if (i == index)
	return (head);
	head = head->next;
	}

	return (NULL);
}
