#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - gets the operator
 * @s: string
 * Return: a pointer to a function
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
{"*", op_mul},
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{'\0', '\0'}
		};

	int k = 0;

	while (ops[k].op != '\0')
	{
		if (strcmp(s, ops[k].op) == 0)
			break;
		k++;
	}

	return (ops[k].f);
}
