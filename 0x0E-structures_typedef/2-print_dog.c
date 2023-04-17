#include <stdio.h>
#include "dog.h"

/**
* print_dog - Write a function that prints a struct dog
*
* @d: input
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{

		if ((*d).name == NULL)
			printf("Name: (nil)\n");
		else if (d->age == 0)
			printf("Age: (nil)\n");
		else if ((*d).owner == NULL)
			printf("Owner: (nil)\n");

		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
