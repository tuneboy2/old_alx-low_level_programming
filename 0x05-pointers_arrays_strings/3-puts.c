#include "main.h"

/**
* _puts - The called function
* @str: The parameter used when called
*
* Description: A function to print a string
* Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}

_putchar(10);
}
