#include "main.h"

/**
* _print_rev_recursion - A function that prints a
* string in reverse.
* @s: Character parameter used when called
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{	
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
	}
}
