#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: int
 * @b: sec int
 * @c: last  integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return (a);
	}
	else if (b > a && b > c)
	{
		return (b);
	}
	else if (c > a && c > b)
	{
		return (c);
	}
	else if (a == b)
	{
		return (a);
	}
	else if (a == c)
	{
		return (c);
	}
	else
	{
		return (b);
	}
}
