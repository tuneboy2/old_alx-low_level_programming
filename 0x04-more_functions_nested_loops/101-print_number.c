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

if (n >= 10 && n < 100)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}

else if (n >= 100 && n < 1000)
{
_putchar(n / 100 + '0');
_putchar((n % 100) / 10 + '0');
_putchar((n % 100) % 10 + '0');
}

else if (n >= 1000 && n < 10000)
{
_putchar(n / 1000 + '0');
_putchar((n / 1000) / 100 + '0');
_putchar((((n / 1000) / 100) / 10) + '0');
_putchar((((n / 1000) / 100) % 10) + '0');
}

else if (n < 0 && n > -100)
{
_putchar(((n * -1) / 10) * -1 + '0');
_putchar((n * -1) % 10 + '0');
}
else
{
_putchar(n + '0');
}

return;
}
