#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 *@s1: var
 *@s2: var
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
			i++;
	}
	return (0);
}
