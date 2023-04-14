#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @a: the size to allocate
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int a)
{
	void *p;

	p = malloc(a);

	if (p == NULL)
		exit(98);

	return (p);
}
