#include "main.h"

/**
* print_number - The called function
* @n: Parameter used when the function is called
*
* Description: A function that prints an integer
* Return: void
*/

void print_number(int n)
{
	unsigned int num;

	if (n >= 0)
		num = n;

	else
	{
		num = -1 * n;
		_putchar('-');
	}

	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
return;
}
