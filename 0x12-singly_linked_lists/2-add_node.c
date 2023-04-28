#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: The double pointer to the list_t list
 * @str: The new string to be duplicated in the node
 *
 * Return: Address of the new element, or NULLL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new elem;
	unsigned int len = 0;

	while (str[len])
		len++;

	new elem = malloc(sizeof(list_t));

	if (!new elem)

	return (NULL);

	new elem->str = strdup(str);
	new elem->len = len;
	new elem->next = (*head);
	(*head) = new elem;

	return (*head);
}
