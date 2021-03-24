#include "lists.h"
/**
 * sum_listint - for holbertonschool
 * @head: var
 * Return: always return 0
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
