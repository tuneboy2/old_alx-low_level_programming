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

int row, col;

if (n > 0)
{
for (row = 1; row < n; row++)
{

for (col = 1; col < n; col++)
{
if (row == col)

{
_putchar(92);
}

}
_putchar(10);
}
}
return;
}
