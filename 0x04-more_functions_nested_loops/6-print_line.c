#include "main.h"

/**
* print_line - The called function
* @n: The parameter used when the function is called
*
* Description: A function that draws a straight line
* Return: void
*/

void print_line(int n)
{
int c;
if (n <= 0)
{
_putchar(10);
}

else
{
for (c = 0; c < n; c++)
_putchar(95);
_putchar(10);
}

_putchar(10);
}
