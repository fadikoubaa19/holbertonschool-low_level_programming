#include <stdio.h>
#include "holberton.h"
/**
*print_alphabet - check the code for Holberton 
*
* Return: Always 0.
*/
void print_alphabet(void)
{
int x;
x = 'a';
while (x <= 'z')
{
_putchar(x);
x = x + 1;
}
_putchar('\n');
}
