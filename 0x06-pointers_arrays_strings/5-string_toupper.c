#include "main.h"

/**
* string_toupper - A function that changes all
* lowercase letters of a string to uppercase.
* @n: The input string
*
* Return: A pointer to an array of characters
*/

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] > 96 && n[i] < 123)
			n[i] -= 32;
	}

	return (n);
}
