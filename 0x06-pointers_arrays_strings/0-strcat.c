#include "main.h"

/**
* _strcat - This function concatenate two strings
* @dest: Parameter 1
* @src: Parameter 2
*
* Return: A pointer to a character array
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
