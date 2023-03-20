#include "dog.h"

/**
 *init_dog - initializes variable of type
 *@d: struct dog
 *@name: char name
 *@age: float age
 *@owner: char owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
