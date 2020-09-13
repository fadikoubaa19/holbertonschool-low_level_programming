#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - for holbertonschool
 *@head: var
 *@n: var
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = malloc(sizeof(dlistint_t));
	dlistint_t *tp = *head;

	if (end == NULL)
		return (NULL);
	end->n = n;
	end->prev = NULL;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (*head);
	}
	while (tp->next != NULL)
	{
		tp = tp->next;
	}
	end->prev = tp;
	tp->next = end;
	return (end);
}
