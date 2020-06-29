#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - check the code for Holberton School students.
 *@a:var.
 *@size:var.
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int x;
	int s1 = 0;
	int s2 = 0;

	x = size * size;
	while  (i < x)
	{
		s1 += a[i];
		i += size + 1;
	}
	i = size - 1;
	while (i < (x - 1))
	{
		s2 += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", s1, s2);
}
