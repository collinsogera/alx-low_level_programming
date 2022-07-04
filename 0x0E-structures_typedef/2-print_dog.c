#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - Prints struct dog
 *@d: Pointer to dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (s->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (ni;)\n");
	}
}
