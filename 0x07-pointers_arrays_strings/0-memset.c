#include "main.h"

/**
* _memset - This function fills the first n bytes of
* the memory area pointed to by s with the constant byte b
* @s: memory area.
* @b: constant byte.
* @n: bytes filled.
*
* Return: A pointer to a Character Array.
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)

		s[i] =  b;

	return (s);

}
