#include "dog.h"
#include <stdlib.h>
/**
 * init_dog
 * @d:
 * @name:
 * @age:
 * @owner:
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
