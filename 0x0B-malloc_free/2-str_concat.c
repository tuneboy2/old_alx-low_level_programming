#include "main.h"
#include <stdlib.h>

/**
* str_concat - A function that concatenates two strings.
* @s1: Parameter 1
* @s2: Parameter 2
*
* Return: A pointer to a character array
*/

char *str_concat(char *s1, char *s2)
{
	int b, i, j, k, l;
	char *new;

	for (i = 0; s1[i] != '\0'; i++)
		;
		
	for (j = i, k = 0; s2[k] != '\0'; j++, k++)
		;
	
	new = malloc(sizeof(char) * j);
	for (l = 0, b = 0; l <= j; l++)
	{
		if (l < i)
		{
			new[l] =s1[l];
		}

		else
		{
			new[l] = s2[b];
			b++;
		}
	}
		return (new);
}
