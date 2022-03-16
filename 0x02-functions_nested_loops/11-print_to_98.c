#include<stdio.h>
#include "main.h"
/**
* print_to_98 - The called function
* @n: The integer used when the function is called
*
* Description: A function that prints numbers from
* n to 98.
* Return: 0 -SUCCESS
*/
void print_to_98(int n)
{
while (n < 98)
{
_putchar('n');
_putchar(',');
_putchar(' ');
n++;
if (n == 98)
printf("%d\n", n);
}
if (n == 98)
{
_putchar('n');
}
else
{
_putchar('n');
_putchar(',');
_putchar(' ');
n--;
}
_putchar(10);
}
