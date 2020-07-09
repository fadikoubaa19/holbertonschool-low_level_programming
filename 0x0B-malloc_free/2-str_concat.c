#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 *
 *@s1:var.
 *@s2:var.
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int hello = 0;
	unsigned int Holberton = 0;
	char *s;

	if (s1 != NULL)
	{
	while (s1[hello] != '\0')
	{
		hello++;
	}
	}
	if (s2 != NULL)
	{
	while (s2[Holberton] != '\0')
	{
		Holberton++;
	}
	}
	s = malloc(sizeof(char) * ((hello + Holberton) + 1));
	if (s == 0)
		return (NULL);
	while (i < hello)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < (Holberton + hello))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
