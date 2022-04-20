#include "main.h"
#include <stdlib.h>

/**
* _strdup - A function returns a pointer to a new
* string which is a duplicate of the string str.
* @str: The given string parameter
*
* Return: A pointer to an array of characters
*/

char *_strdup(char *str)
{
	int i, j;
	char *new;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	new = malloc(sizeof(char) * i);
	for (j = 0; j < i; j++)
	{
		new[j] = str[j];
	}

return (new);
}
