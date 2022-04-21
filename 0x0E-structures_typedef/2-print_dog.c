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

		else if (d->name == NULL && d->owner == NULL)
		printf("Name: (nil)\nAge: %3.6f\nOwner: (nil)\n", d->age);

	printf("Name: %s\nAge: %3.6f\nOwner: %s\n", (*d).name, d->age, d->owner);
	}
}

/*
*void print_dog(struct dog *d)
*{
*	if (d)
*	{
*		if (!(d->name))
*			printf("Name: (nil)\n");
*		else
*			printf("Name: %s\n", d->name);
*
*		printf("Age: %f\n", d->age);
*
*		if (!(d->owner))
*			printf("Owner: (nil)\n");
*		else
*			printf("Owner: %s\n", d->owner);
*	}
*}
*/
