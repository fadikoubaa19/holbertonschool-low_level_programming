#include "holberton.h"
#include <stdio.h>


/**
 * rev_strin - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i=0;
int j=0;
char f;
char b;

while (s[i] != '\0')
i++;
i--;
while (i>j)
{
f = s[i];
b = s[j];
s[i] = b;
s[j] = f;
i--;
j++;
}
}