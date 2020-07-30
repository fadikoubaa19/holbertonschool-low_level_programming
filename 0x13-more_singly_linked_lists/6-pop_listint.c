#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - fafafa
 * @head: fafafa
 * Return: var.
 */
int pop_listint(listint_t **head)
{
listint_t *s;
int i;
if (head == NULL || *head == NULL)
return (0);
s = *head;
i = (*head)->i;
*head = (*head)->next;
free(s);
return (i);
}
