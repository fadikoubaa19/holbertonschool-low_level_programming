#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - puts2  a string. 
 * @str: char to define the string
*/

void puts2(char *str)
{
int i = 0;
int j = 0;
while (str[i] != '\0')
{
i++;
while (j < i)
{
_putchar (str[j]);
j = j + 2;
}
}
_putchar ('\n');
}
