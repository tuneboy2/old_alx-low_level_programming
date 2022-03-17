#include "main.h"

/**
* more_numbers - The called function
*
* Description: A function that prints numbers x10
* Return: void
*/

void more_numbers(void)
{

int a, b;
a = 0;

while (a < 10)
{

for (b = 0; b < 15; b++)
{
if (b >= 10)

_putchar(b / 10 + '0');
_putchar(b % 10 + '0');

}

_putchar(10);
a++;
}

return;
}
