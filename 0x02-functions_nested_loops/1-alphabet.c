#include "main.h"
/**
* main - void
*
* Description: A function thst prints the alphabet* in lowercase
* Return: 0 - SUCCESS
*/
void print_alphabet(void)
{
char a = 97;
while (a < 123)
{
_putchar(a);
a++;
}
_putchar(10);
return;
}
