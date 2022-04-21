#include "dog.h"
#include <stdlib.h>

/**
* init_dog - A function that initialize a variable of type struct dog
* @d: The structure to be initialized
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Return: A void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
