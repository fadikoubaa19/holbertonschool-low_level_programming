#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - check this  man!
 * @d: var.
 */
void free_dog(dog_t *d)
{
while (d != NULL)
	{
free(d->owner);
free(d->name);
free(d);
	}
}
