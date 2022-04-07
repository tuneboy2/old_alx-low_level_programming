#include "main.h"

/**
* times_table - A function that prints the time table of 9 starting from 0.
*
* Return: 0 - SUCCESS
*/

void times_table(void)
{
	int i, j, mul;

	for (i = 0; i < 10; i++)
	{
	_putchar('0');
	_putchar(',');
		for (j = 1; j < 10; j++)
		{
			mul = i * j;

			if (mul > 9)
			{
			_putchar(' ');
			_putchar(mul / 10 + '0');
			_putchar(mul % 10 + '0');
			}

			else
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(mul + '0');
			}

			if (j < 9)
			{
			_putchar(',');
			}
		}
	_putchar(10);
	}
}
