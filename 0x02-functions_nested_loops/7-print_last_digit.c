#include "main.h"

/**
* print_last_digit - The function that is called
* @n: Integer used when the function is called
*
* Description: A function that prints the last
* digit of an integer
* Return: 0 - SUCCESS
*/

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
		_putchar(n + '0');
		return (n);
	}

	else
	{
		n = (n % 10);
		_putchar(n + '0');
		return (n);
	}

}
