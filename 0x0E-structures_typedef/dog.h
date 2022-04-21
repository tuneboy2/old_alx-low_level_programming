#ifndef _DOG_H
#define _DOG_H

/**
* struct dog - The structure data type for dog
* @name: Parameter 1
* @age: Age of the dog
* @owner: Owner of the dog parameter
*
* Description: Structure data typ
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
