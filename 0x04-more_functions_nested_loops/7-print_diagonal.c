#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the character / should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a, i;
	a = 0;
	if (n > 0)
		for (i = 0 ; i < n; i++)
		{
			for (a = 0; a < i; a++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
