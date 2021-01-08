#include "holberton.h"
/**
 *print_alphabet_x10 - check the code for Holberton  students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char x;
int y;
x = 'a';
for (y = 0 ; y < 10 ; y++)
{
while (x <= 'z')
{
_putchar(x);
x = x + 1;
}
x = 'a';
_putchar ('\n');
}
}
