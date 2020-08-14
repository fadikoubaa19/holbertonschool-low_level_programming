#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - check the code for Holberton School students.
 *@b:var
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int c = 0;
if (!b)
return (0);
a = 0;
while (b[a] != '\0')
{
if (b[a] != '0' && b[a] != '1')
{
return (0);
}
a++;
}
for (a = 0; b[a] != '\0'; a++)
{
c <<= 1;
if (b[a] == '1')
{
c += 1;
}
}
return (c);
}
