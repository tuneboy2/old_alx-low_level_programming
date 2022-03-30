#include "main.h"

/**
* factorial - A function that returns the factorial of
* a given number
* @n: The parameter passed when function is called
*
* Return: An integer
*/

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
