#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - function to frees memory allocated for a struct dog
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
