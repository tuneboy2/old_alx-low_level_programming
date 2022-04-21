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
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\nAge: %3.6f\nOwner: %s\n", d->age, d->owner);

		else if (d->owner == NULL)
			printf("Name: %s\nAge: %3.6f\nOwner: (nil)\n", (*d).name, d->age);

	printf("Name: %s\nAge: %3.6f\nOwner: %s\n", (*d).name, d->age, d->owner);
	}
}
