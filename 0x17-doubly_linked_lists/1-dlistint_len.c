#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - for holbertonschool s
 * @h:var
 *Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
int a = 0;
while (h != NULL)
{
h = (*h).next;
a++;
}
return (a);
}
