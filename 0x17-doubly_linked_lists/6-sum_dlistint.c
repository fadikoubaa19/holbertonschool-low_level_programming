#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - stack over flow flow xD
 * @head: list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int s = 0;
while (head)
{
s += head->n;
head = head->next;
}
return (s);
}
