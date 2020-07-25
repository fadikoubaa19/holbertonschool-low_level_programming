#include <stdio.h>
#include "lists.h"
/**
 *print_list - printer
 *@h: var:
 *Return: always 0
 */
size_t print_list(const list_t *h)
{
	unsigned int j = 0;

	if (h == '\0')
		return (0);
	while (h != '\0')
	{
		if (h->str == '\0')
		{
			printf("[%d] (nil)", 0);
			h = h->next;
			j++;
			printf("\n");
		}
		else
		{
			printf("[%xd] %s\n", h->len, h->str);
		h = h->next;
		j++;
		}
	}
	return (j);
}

