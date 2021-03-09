#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the information of dog.
 * @d: is the typedef of structure dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL)
		printf("(nil)");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
