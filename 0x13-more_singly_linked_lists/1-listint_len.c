#include <stdio.h>
#include "lists.h"
/**
 * listint_len -  holbertonschool blabla..
 * @h: var
 * Return: return s
 */
size_t  listint_len(const listint_t *h)
{
size_t s = 0;
while (h != '\0')
{
s++;
h = h->next;
}
return (s);
}
