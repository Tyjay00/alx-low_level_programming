#include "main.h"
#include <stdio.h>
/**
  * factorial - Will calculate the factorial of a number
  * @a: The factorial number to calculate
  *
  * Return: integer value
  */
int factorial(int a)
{
	if (a < 0)
		return (-1);

	if (a <= 1)
		return (1);

	return (a * factorial(a - 1));
}
