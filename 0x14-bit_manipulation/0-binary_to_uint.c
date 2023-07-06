#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @c: String containing the binary number
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *c)
{
	int d;
	unsigned int decimal_value = 0;

	if (!c)
		return (0);

	for (d = 0; c[d]; d++)
	{
		if (c[d] < '0' || c[d] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (c[d] - '0');
	}

	return (decimal_value);
}
