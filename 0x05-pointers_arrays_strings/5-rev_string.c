#include"main.h"

/**
* rev_string - The called function
* @s: Tge parameter used when the function is called
*
* Description: A function that reverses a string
* Return: void
*/

void rev_string(char *s)
{
	int count;

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
