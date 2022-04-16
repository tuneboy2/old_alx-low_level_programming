#include "main.h"

/**
* cap_string - A function that capitalizes all words of a string.
* @n: The parameter of a pointer to a string.
*
* Return: A pointer to a character array
*/

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[0] > 96 && n[0] < 123)
			n[0] -= 32;

		if (n[i] == ' ' ||
			n[i] == '\t' ||
			n[i] == '\n' ||
			n[i] == ',' ||
			n[i] == ';' ||
			n[i] == '.' ||
			n[i] == '!' ||
			n[i] == '?' ||
			n[i] == '"')
		{
			if (n[i + 1] > 96 && n[i + 1] < 123)
			*(n + i + 1) -= 32;
		}
	}
return (n);
}
