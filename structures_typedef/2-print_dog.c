#include "dog.h"
#include <stdio.h>

/**
 *print_dog - prints struct dog
 *@d: receives pointer
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
	printf("Name: nil");
	printf("Owner: nil");
	}

	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
