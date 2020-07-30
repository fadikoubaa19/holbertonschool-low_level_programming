#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - holbetonschool 
 * @head: var
 * @n: var
 *
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *f;
if (head == NULL)
return (NULL);
nele = malloc(sizeof(listint_t));
if (f == NULL)
return (NULL);
f->n = n;
f->next = *head;
*head = f;
return (f);
}
