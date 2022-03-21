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
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	str++;
	}

_putchar(10);
}
