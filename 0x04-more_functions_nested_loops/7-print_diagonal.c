#include "main.h"

/**
* print_diagonal - The called function
* @n: The parameter used when the function is called
*
* Description: A function that draws a diagonal line
* in the terminal.
* Return: void
*/

void print_diagonal(int n)
{
int rows, j, space = 1;
	if (n > 0)
	{
		for (rows = 0; rows < n; rows++)
		{
			_putchar(92);
			if (rows < n - 1)
			{
				_putchar(10);

				for (j = 0; j < space; j++)
				{
					_putchar(' ');
				}
			space++;
			}
		}
	}
_putchar(10);
return;
}
