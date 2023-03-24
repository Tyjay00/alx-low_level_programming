#include "main.h"

/**
 * print_line - Draws a straight line according to parameter
 * @b: The number of lines to draw
 * Return: empty
 */

void print_line(int b)

{
	int a;

	if (b <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < b; a++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
