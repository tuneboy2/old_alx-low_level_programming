#include "main.h"

/**
* _strlen - The called function
* @s: Parameter used when called
*
* Description: Returns the length of a string
* Return: 0 - SUCCESS
*/

int _strlen(char *s)
{
	int count = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
return (count);
}
