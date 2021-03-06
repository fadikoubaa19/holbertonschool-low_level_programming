#include "holberton.h"
#include <stdio.h>

/**
 * int wildcmp - check the code for Holberton School students.
 *
 *@s1:var.
 *@s2:var.
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);

		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
	}

	if (*s2 == '*')
		return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));

	return (0);
}
