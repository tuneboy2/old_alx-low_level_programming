#include "main.h"

/**
* print_last_digit - The function that is called
* @l: Integer used when the function is called
*
* Description: A function that prints the last
* digit of an integer
* Return: 0 - SUCCESS
*/

int print_last_digit(int l)
{
int o;

if (l < 48)
{
o = ((l * -1) % 10);
_putchar(o + '0');
return (o);
}

else
{
o = (l % 10);
_putchar(o + '0');
return (o);
}

}
