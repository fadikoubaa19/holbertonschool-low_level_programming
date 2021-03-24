#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - for holbertonschool
 *@head: var 
 * Return : 0
 */
void free_listint(listint_t *head)
{
listint_t *s;
while (head != NULL)
{
s = head;
head = head->next;
free(s);
}
}
