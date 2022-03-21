#include "main.h"

/**
* puts_half - The function called
* @str: The parameter used when called
*
* Description: Print half of a string
* Return: void
*/

void puts_half(char *str)
{
	int length, n;

	length = 0;
	while (str[length] != '\0')
	{
	length++;
	}

	if ((length % 2) == 0)
	{
	for (n = length / 2; str[n] != '\0'; n++)
	{
	_putchar(str[n]);
	}
	}
	else if ((length % 2) != 0)
	{
	for (n = ((length - 1) / 2); str[n] != '\0'; n++)
	{
	_putchar(str[n + 1]);
	}
	}
_putchar(10);
}
