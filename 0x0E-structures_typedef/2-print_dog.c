#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - This function prints a struct dog elements
* @d: The structure data type to be printed
*
* Return: A void
*/

void print_dog(struct dog *d)
{
	char *nil = (nil);

	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = nil;

		else if (d->owner == NULL)
			d->owner = nil;

	printf("Name: %s\nAge: %3.6f\nOwner: %s\n", (*d).name, d->age, d->owner);
	}
}
