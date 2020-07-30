#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - yea hhh §§.
 * @head: varrrrrr
 * Return: fafaa
 */
void free_listint2(listint_t **head)
{
listint_t *s;
if (head == NULL)
return;
while (*head != NULL)
{
next = (*head)->s;
free(*head);
*head = s;
}
}
