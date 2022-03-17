#include "main.h"

/**
* print_most_numbers - The function that's called
*
* Description: A function that prints number but
* with an exception.
* Return: void
*/

void print_most_numbers(void)
{

int a;

for (a = 48; a < 58; a++)
{

if (a == 52 || a == 50)
{
continue;
}

else
{
_putchar(a);
}

}
_putchar(10);
}
