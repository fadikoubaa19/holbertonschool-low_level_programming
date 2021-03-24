#include "holberton.h"
#include <stdio.h>

/**
* swap_int - check the code for Holberton School students. 
*@a:var.
*@b:var.
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int t;
t  = *b;
*b = *a;
*a = t;
}
