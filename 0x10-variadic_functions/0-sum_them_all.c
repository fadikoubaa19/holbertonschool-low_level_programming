#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all args
 * @n: var.
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(m, n);
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(m, int);
		i++;
	}
	va_end(m);
	return (sum);
}
