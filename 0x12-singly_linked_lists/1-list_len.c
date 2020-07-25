#include "lists.h"
/**
 *list_len - hoohle
 *@h: var
 *Return:always zero
 *
 */
size_t list_len(const list_t *h)
{
unsigned int j = 0;

if (h == '\0')
return (0);
while (h != '\0')
{
if (h->str == '\0')
{
h = h->next;
j++;
}
else
{
h = h->next;
j++;
}
}
return (j);
}
