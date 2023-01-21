#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a variable type
 * @d: pointer to struct dog type
 * @name: pointer to dogs name
 * @age: dogs age
 * @owner: pointer to owners dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
