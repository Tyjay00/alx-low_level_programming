#include "main.h"

/**
  * _puts_recursion - Will print a string followed by a new line
  * @i: is the string to print
  *
  * Return: 0
  */
void _puts_recursion(char *i)
{
	if (*i == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*i);
	i++;
	_puts_recursion(i);
}
