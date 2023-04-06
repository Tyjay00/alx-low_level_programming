#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - Will calculate the length of a string
  * @i: string to count
  *
  * Return: integer value
  */
int _strlen_recursion(char *i)
{
	if (*i == '\0')
	{
		return (0);
	}

	i++;
	return (_strlen_recursion(i) + 1);
}

