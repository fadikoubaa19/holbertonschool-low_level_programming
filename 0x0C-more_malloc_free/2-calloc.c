#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - holbertonschool
 * @nmemb: var
 * @size: var
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ch;
unsigned int i = 0;
if ((nmemb * size) == 0)
return (NULL);
ch = malloc(nmemb * size);
if (!ch)
return (NULL);
while (i < (nmemb * size))
{
ch[i] = 0;
i++;
}
return (ch);
}
