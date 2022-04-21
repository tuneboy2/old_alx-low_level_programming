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
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);	}
}
