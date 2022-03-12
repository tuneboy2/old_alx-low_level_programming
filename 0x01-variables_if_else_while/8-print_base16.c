#include <stdio.h>
/**
* main - void
*
* Description: print a hexadecimal number
* Return: 0
*/
int main(void)
{
int b = 48;
while (b < 58)
{
putchar(b);
b++;
}
char init = 'a';
while (init < 'g')
{
putchar(init);
init++;
}
putchar('\n');
return (0);
}
