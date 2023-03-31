#include "main.h"
#include <stdio.h>

/**
 *  _strcmp - Compares pointer to two strings.
 *  @s1: A pointer to the first string
 *  @s2: A pointer to the second string
 *  Return: If str1 < str2.
 *  if str1 == str2, 0.
 *  if str1 > str2.
 */

int _strcmp(char *s1, char *s2)

	{
		while (*s1 && *s2 && *s1 == *s2)
		{
		s1++;
		s2++;
		}
		return (*s1 - *s2);
	}
