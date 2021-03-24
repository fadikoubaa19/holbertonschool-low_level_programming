#include "holberton.h"
/**
*flip_bits - holbertonschool
*@n: var
*@m:var
*Return:num
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
		{
			c++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (c); 
}
