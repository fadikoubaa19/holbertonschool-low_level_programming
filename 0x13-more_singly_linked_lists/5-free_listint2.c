#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - yea hhh §§.
 * @head: varrrrrr
 * Return:0
 */
void free_listint2(listint_t **head)
{
listint_t *s, *m;
if (head == NULL)
{
return;
}
m = *head;
while (m != NULL)
{
s = m;
m = m->next;
free(s);
}
*head = NULL;
}
