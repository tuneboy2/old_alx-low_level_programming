#include "main.h"

/**
* print_rev - The called function
* @s: The parameter used
*
* Description: A function to print a string in reverse
* Return: void
*/

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
	s++;
	count++;
	}

	while (count > 0)
	{
	s--;
	_putchar(*s);
	count--;
	}

	_putchar(10);
}
