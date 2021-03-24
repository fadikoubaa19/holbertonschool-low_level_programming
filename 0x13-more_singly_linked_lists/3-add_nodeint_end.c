#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end  - for holbertonschool
 * @head: var
 * @n: var
 * Return: return s
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{ 
listint_t *s;
listint_t *a;
if (head == NULL)
return (NULL);
s = malloc(sizeof(listint_t));
if (s == NULL)
return (NULL);
s->n = n;
s->next = NULL;
if (*head == NULL)
{
*head = s;
return (s);
}
a = *head;
while (a->next != NULL)
a = a->next;
a->next = s;
return (s);
}
