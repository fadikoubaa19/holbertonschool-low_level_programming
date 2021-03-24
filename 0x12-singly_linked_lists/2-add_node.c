#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - for holb
 *@head:var
 *@str:var
 *Return: always zero
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *s = NULL;
	size_t  length = 0;

	while (str && str[length])
		length++;
	s = malloc(sizeof(*s));
	if (s)
	{
		s->str  = strdup(str);
		s->len  = length;
		s->next = *head;
		*head = s;
	}
	return (s);
}
