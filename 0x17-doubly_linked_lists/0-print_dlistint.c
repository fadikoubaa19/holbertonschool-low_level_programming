#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *print_dlistint - for holbertonschool
 *@h: var
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int a = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
