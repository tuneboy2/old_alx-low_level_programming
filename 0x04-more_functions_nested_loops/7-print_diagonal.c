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

int c;
if (n > 0)
{

for (c = 0; c < n; c++)
{
_putchar(92);

while (c < n)
{
_putchar(10);
_putchar(' ');
break;
}

}

}
_putchar(10);
}
