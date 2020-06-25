#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: arr
 * @n: number
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int aux;
	int i = 0;
	int z;

	n--;
	z = n / 2;
	while (i < z)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		i++;
		n--;
}
}