#include "main.h"
/**
* print_sign - function called by main
* @n: The integer to be used
*
* Description: Function that prints the sign of a * number
* Return: 0 - SUCCESS
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0);
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar(10);
return (0);
}
