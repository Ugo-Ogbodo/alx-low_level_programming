#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -dog struct
 * @d: name of the struct
 * @age: age
 * @owner: dog owner
 * @name: name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
