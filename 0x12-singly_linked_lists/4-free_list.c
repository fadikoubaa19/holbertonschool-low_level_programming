#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees all the nodes in a linked list
 * @head: pointer to the head of list_t linked list
 */
void free_list(list_t *head)
{
	list_t *a = NULL;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
