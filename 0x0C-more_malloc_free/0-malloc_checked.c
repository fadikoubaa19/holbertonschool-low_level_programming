#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - holbertonschool
 * @b: var
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
void *m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}
