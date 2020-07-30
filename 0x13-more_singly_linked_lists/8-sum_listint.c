#include "lists.h"
/**
 * sum_listint - fafafa
 * @head: var
 * Return: fafa
 */
int sum_listint(listint_t *head)
{
int i = 0;
while (head != NULL)
{
i += head->n;
head = head->next;
}
return (i);
}
