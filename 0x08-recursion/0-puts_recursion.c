#include "main.h"

/**
* _puts_recursion - Thisbfunction prints a string
* when called
* @s: Character parameter
*
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);

	if (*s == '\0')
	_putchar(10);
}
