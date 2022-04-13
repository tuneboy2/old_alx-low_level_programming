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
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = (i + 1) / 2; j <= i; j++)
		_putchar(str[j]);

	_putchar(10);
}
