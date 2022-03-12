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
char init = 'a';
while (b < 58)
{
putchar(b);
b++;
}
while (init < 'g')
{
putchar(init);
init++;
}
putchar('\n');
return (0);
}
