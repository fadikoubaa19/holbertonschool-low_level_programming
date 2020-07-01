#include "holberton.h"
/**
 * _sqrt - check the code for Holberton School students.
 *@i: var.	
 *@n: var.
 * Return: Always 0.
 */
int _sqrt(int i, int n)
{

	if (i * i == n)
		return (i);
	else if (i == n)
		return (-1);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt(i + 1, n));
}
/**
 *_sqrt_recursion - dael
 *@n: var.
 *Return: var.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}

