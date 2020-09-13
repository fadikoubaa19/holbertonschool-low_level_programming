#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - for Holberton School students.
 *@head :var
 *@n : var
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *m = malloc(sizeof(dlistint_t));
	dlistint_t *a = malloc(sizeof(dlistint_t));

	if (m == NULL)
		return (NULL);
	m->n = n;
	m->prev = NULL;
	m->next = NULL;
	if (*head == NULL)
	{
		m->next = NULL;
		*head = m;
		return (*head);
	}
	a = *head;
	m->next = a;
	m->prev = m;
	*head = m;
	return (m);
}
