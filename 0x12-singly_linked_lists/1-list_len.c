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

if (h == NULL)
return (0);
while (h != NULL)
{
if (h->str == NULL)
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
