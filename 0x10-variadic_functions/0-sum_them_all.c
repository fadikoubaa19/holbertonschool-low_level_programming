#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - sum of all
*@n: var
*
*Return: 0
*
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ml; 

	va_start(ml, n);
	for (i = 0; i < n; ++i)
	{
		sum += va_arg(ml, int);
	}

	va_end(ml);
	return (sum);
}
