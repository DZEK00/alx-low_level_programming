#include "dog.h"
#include <string.h>

/**
* init_dog - a function that initialize a variable of type struct dog
*
* @d: input
* @name: input
* @age: input
* @owner: input
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);

	d->age = age;

	strcpy(d->owner, owner);
}
