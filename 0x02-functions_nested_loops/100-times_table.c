#include "main.h"

/**
* print_times_table - A function that prints the n times table
* @n: Parameter 1
*
* Return: 0 - SUCCESS
*/

void what_of(int n);

void print_times_table(int n)
{
	int i, j, mul;

if (n >= 0 && n < 15)
{
	for (i = 0; i <= n; i++)
	{
	what_of(n);
		for (j = 1; j <= n; j++)
		{
			mul = i * j;
			if (mul > 9 && mul < 100)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(mul / 10 + '0');
			_putchar(mul % 10 + '0');
			}
		else if (mul > 99 && mul < 1000)
		{
			_putchar(' ');
			_putchar(mul / 100 + '0');
			_putchar((mul % 100) / 10 + '0');
			_putchar(mul % 10 + '0');
		}
			else
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(mul + '0');
			}
			if (j < n)
			{
			_putchar(',');
			}
		}
	_putchar(10);
	}
}
}

/**
* what_of - Determines if 0 is placed with a comma or not.
* @n: Parameter of what_of
*
* Return: void
*/

void what_of(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('0');
		_putchar(',');
	}
}
