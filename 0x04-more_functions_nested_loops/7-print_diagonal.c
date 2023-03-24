#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines according parameter
 * @c: The number of times to print diagonal lines
 * Return: empty
 */

void print_diagonal(int c)

{
	int a, b;

	if (c <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < c; a++)
	{
	for (b = 0; b < a; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
