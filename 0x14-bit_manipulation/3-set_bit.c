#include "holberton.h"
/**
*set_bit - for holberton school
*@n: var
*@index: varr
*Return:1 -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{ 
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
