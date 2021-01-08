#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - for holb
 *@head: var
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *end;

	while (head)
	{
		end = head->next;
		free(head);
		head = end;
	}
}

