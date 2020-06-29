#include "holberton.h"
#include <stdio.h>

/**
 *print_chessboard - check the code for Holberton School students.
 *@a: var..
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int y = 0;

	while (i < 8)
	{
		y = 0;
		while (y < 8)
		{
			putchar(a[i][y]);
			y++;
		}
		i++;
		putchar('\n');
}
}
