#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c:var.
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{

		unsigned int i;
		char *s;

	i = 0;
	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (NULL);
	if (size > 0)
	{
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
	}
	else
		return (NULL);
}
