#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *free_dog - frees dog
 *@d: receives pointer
 */

void free_dog(dog_t *d)
{
	if (d==NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
