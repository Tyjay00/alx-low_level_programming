#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a double linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	while (temp != NULL)
	{
	if (i == index)
	{
	if (i == 0)
	{
	*head = temp->next;
	if (temp->next != NULL)
	temp->next->prev = NULL;
	free(temp);
	return (1);
	}
	else
	{
	temp->prev->next = temp->next;
	if (temp->next != NULL)
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
	}
	}
	i++;
	temp = temp->next;
	}
	return (-1);
}
