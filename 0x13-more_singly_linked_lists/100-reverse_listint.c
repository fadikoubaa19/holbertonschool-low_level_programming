#include "lists.h"
/**
 * reverse_listint - fafafa
 * @head: varr
 * Return: fafafa
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *l, *n;
if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->n == NULL)
return (*head);
l = NULL;
while (*head != NULL)
{
n = (*head)->n;
(*head)->n = l;
l = *head;
*head = n;
}
*head = l;
return (*head);
}
