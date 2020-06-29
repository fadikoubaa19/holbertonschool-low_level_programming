#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - prints buffer in hexa
 *@dest:var.
 *@src:var.
 *@n:var.
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i, j;
i = 0;
j = 0;
while (i < n)
{
	dest[j] = src[i];
	if (src[i] == '\0')
	{
		dest[j] = '\0';
		break;
	}
	j++;
	i++;
}
while (j < n)
dest [j++] = '\0';
return (dest);
}
