#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - for holberton
 *@head: var
 *@index: var
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *end = head;

	while (end != NULL)
	{
		if (index == i)
			return (end);
		end = end->next;
		i++;
	}
	return (NULL);
}
