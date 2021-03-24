#include "holberton.h"
/**
*clear_bit - for holbertonschool
*@n: varr
*@index: var
*Return: 1  -1 
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
