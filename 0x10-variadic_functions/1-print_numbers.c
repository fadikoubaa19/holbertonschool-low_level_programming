#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that print nubers
 * @separator:var.
 * @n: var.
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int b = 0;

va_list number;
va_start(number, n);

while (b < n)
{
printf("%d", va_arg(number, int));
if (b != n - 1 && separator)
printf("%s", separator);
b++;
}
printf("\n");
va_end(number);
}
