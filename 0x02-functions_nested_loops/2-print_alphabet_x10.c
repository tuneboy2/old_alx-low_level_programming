#include "main.h"
/**
* print_alphabet_x1 - A function that prints 10
* times the alphabet, in lowercase
*
* Description: void
* Return: 0 - SUCCESS
*/
void print_alphabet_x10(void)
{
int a = 48;
while (a < 58)
{
char b = 97;
while (b < 123)
{
_putchar(b);
b++;
}
_putchar(10);
a++;
}
return;
}
