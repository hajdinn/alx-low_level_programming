#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initializes a variable of type struct dog
 * @d: pointer to struct dog to initialization
 * @name: name  initialization
 * @age: age  initialization
 * @owner: owner  initialization
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
