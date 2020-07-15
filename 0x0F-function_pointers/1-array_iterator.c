#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t ch;
	if(array && action )
	for (ch = 0; ch < size; ch ++)
	{
	action(array[ch]);
	}
}
