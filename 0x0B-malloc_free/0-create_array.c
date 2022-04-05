#include "main.h"
#include <stdlib.h>

/**
* create_array - The called function
* @size: Parameter 1
* @c: Parameter 2
*
* Return: A Character
*/

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
return (str);
}
