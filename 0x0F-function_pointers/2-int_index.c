#include "function_pointers.h"
/**
 *int_index - int.
 *@array: var.
 *@size:  var.
 *@cmp: var.
 *Return: always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != '\0' && cmp != '\0')
	{
		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]))
			{
				return (k);
			}
		}
	}
	return (-1);
}

