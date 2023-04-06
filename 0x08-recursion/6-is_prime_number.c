#include "main.h"
#include <stdio.h>


int check_prime(int n, int a);

/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - Check if number is prime
  * @n: the number to be checked
  * @a: the iteration times
  *
  * Return: 1 for prime or 0 composite
  */
int check_prime(int n, int a)
{
	if (n <= 1)
		return (0);

	if (n % a == 0 && a > 1)
		return (0);

	if ((n / a) < a)
		return (1);

	return (check_prime(n, a + 1));
}
