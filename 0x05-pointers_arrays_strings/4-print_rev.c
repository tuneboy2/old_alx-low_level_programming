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
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (i = count; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
