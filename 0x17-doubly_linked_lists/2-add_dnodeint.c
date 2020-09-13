#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - for Holberton .
 *@head :var
 *@n : var
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *end = malloc(sizeof(dlistint_t));
	dlistint_t *tp = malloc(sizeof(dlistint_t));

	if (end == NULL)
		return (NULL);
	end->n = n;
	end->prev = NULL;
	end->next = NULL;
	if (*head == NULL)
	{
		end->next = NULL;
		*head = end;
		return (*head);
	}
	tp = *head;
	end->next = tp;
	tp->prev = end;
	*head = end;
	return (end);
}
