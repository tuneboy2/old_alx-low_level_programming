#include "main.h"

/**
* print_square - Write a function that prints a square
* @size: Parameter that determines the height and width of the square.
*
* Return: Void
*/

void print_square(int size)
{
	int rows, cols;

	if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (cols = 0; cols < size; cols++)
			{
				_putchar('#');
			}
		_putchar(10);
		}
	}

	else
		_putchar(10);
}
