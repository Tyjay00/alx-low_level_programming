#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (h == NULL)
	return (NULL);

	if (idx == 0)
	return (add_dnodeint(h, n));

	temp = *h;
	for (i = 0; temp != NULL && i < idx; i++)
	temp = temp->next;

	if (temp == NULL && i == idx)
	return (add_dnodeint_end(h, n));

	if (temp == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = temp->prev;
	new_node->next = temp;
	temp->prev->next = new_node;
	temp->prev = new_node;

	return (new_node);
}

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: The double linked list to count
 *
 * Return: Number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
	++lenght;
	h = h->next;
	}

	return (lenght);
}

/**
 * create_node - Create a new node with values
 * @n: The number of the new node
 * @next: The next node of the new node
 * @prev: The previous node of the new node
 * Return: The address of the new node created
 */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;
	return (new_node);
}
