#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code for Holberton School students.
 *@s:var.
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 1;
	{
	if (*s == '\0')
		return (0);
	return (i + _strlen_recursion(s + 1));
}
}
