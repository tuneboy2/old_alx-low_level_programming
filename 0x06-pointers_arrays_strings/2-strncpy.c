#include "main.h"

/**
* _strncpy - A functionthat copies a string.
* @dest: Parameter 1
* @src: The copied string
* @n: Determines the size of character to be copied
*
* Return: A pointer to a character array
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
