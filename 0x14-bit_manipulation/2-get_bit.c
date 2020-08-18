#include "holberton.h"
/**
*get_bit -for holbertonschool
*@n: varr
*@index: var
*Return:zeroo
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}
