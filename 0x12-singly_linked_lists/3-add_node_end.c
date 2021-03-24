#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - check it
 * @head: var
 * @str: var
 * Return: always 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s = NULL, *a = NULL;
	size_t len = 0;

	while (str && str[len])
		len++;
	s = malloc(sizeof(*s));
	if (s)
	{
		s->str  = strdup(str);
		s->len  = len;
		s->next = '\0';
		if (!*head)
			*head = s;
		else
		{
			a = *head;
			while (a->next)
				a = a->next;
			a->next = s;
		}
		
	}
	return (s);
}
