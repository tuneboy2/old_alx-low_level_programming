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
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	s++;
	_puts_recursion(s);
}
