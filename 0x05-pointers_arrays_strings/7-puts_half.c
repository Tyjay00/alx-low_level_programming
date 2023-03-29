#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
	int m = 0;
	int n;

	while (str[m] != '\0')
	{
	m++;
	}
	if (m % 2 == 1)
	{
	n = (m - 1) / 2;
	n += 1;
	}
	else
	{
	n = m / 2;
	}

	for (; n < m; n++)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
}
