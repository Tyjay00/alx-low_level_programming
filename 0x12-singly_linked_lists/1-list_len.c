#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the elements in a linked list
 * @h: Pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nelem = 0;

	while (h)
	{
		nelem++;
		h = h->next;
	}
	return (nelem);
}

