#include "main.h"

/**
  * _print_rev_recursion - Will print a string in reverse
  * @i: string to reverse
  *
  * Return: 0
  */
void _print_rev_recursion(char *i)
{
	if (*i == '\0')
	{
		return;
	}

	i++;
	_print_rev_recursion(i);
	i--;
	_putchar(*i);
}
