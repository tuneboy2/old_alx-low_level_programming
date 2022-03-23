#include "main.h"
/**
* _strcpy - The called function
* @dest: Parameter 1
* @src: Parameter 2
*
* Description: A function that copoes a string
* Return: character
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
