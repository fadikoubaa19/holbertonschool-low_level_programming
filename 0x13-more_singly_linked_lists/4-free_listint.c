#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  frees a listint_t list.
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *s;
while (head != NULL)
{
s = head->s;
free(head);
head = s;
}
}

