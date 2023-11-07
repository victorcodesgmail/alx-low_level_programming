#include <stdio.h>
#include "dog.h"
/**
 * void init_dog-main
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 * @d: dog variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
