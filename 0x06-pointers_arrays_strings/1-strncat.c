#include "main.h"

/**
* _strncat - This function concatenate two strings
* @dest: Parameter 1
* @src: Parameter 2
* @n: Determines the number of string printed out
*
* Return: A pointer to a character array
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		if (j < n)
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
