#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that print string
 * @separator:var.
 * @n: var.
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b = 0;
	char *s;
	va_list number;
	va_start(number, n);
	while (b < n)
{
	s = va_arg(number, char*);
	if (!s)
	s = "(nil)";
	printf("%s", s);
	if (b != n - 1 && separator)
	printf("%s", separator);
	b++;
}
	printf("\n");
	va_end(number);
}

