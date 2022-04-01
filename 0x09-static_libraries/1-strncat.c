#include "main.h"

/**
* _strncat - A function thats called
* @dest: Parameter 1
* @src: Parameter 2
* @n: Parameter 3
*
* Return: A character
*/

char *_strncat(char *dest, char *src, int n)
{
	*dest = 'a';
	*src = 'f';
	n += 5;
	
	return (dest);
}
