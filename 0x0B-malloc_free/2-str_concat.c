#include "main.h"
#include <stdio.h>
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
	
	while (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1[0] = '\0';
	
		else if (s2 == NULL)
			s2[0] = '\0';
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
		
	for (j = i, k = 0; s2[k] != '\0'; j++, k++)
		;
	
	new = malloc(sizeof(char) * j + 1);
	if (new == NULL)
	{
		printf("Can't allocate bytes for (%d calls)\n", j);
		return (NULL);
	}

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
