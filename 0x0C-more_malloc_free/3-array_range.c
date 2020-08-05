#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - holbertonschool
 * @min: var
 * @max:var
 * Return: var
 */
int *array_range(int min, int max)
{
int *ch;
unsigned int i = 0;
if (min > max)
return (NULL);
ch = malloc((max - min + 1) * sizeof(*ch));
if (!ch)
return (NULL);
while (min <= max)
{
ch[i] = min;
min++;
i++;
}
return (ch);
}
