#include "main.h"

/**
* puts2 - The called function
* @str: The paraneter used when called
*
* Description: A function that prints every other
* number
* Return: void
*/

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}

	j = 0;
	while (j < i)
	{
	_putchar(str[j]);
	j = j + 2;
	}

_putchar(10);
}
