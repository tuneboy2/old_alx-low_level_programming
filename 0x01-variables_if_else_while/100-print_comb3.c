#include <stdio.h>
/**
* main - void
*
* Description: Combination of two digits
* Return: 0 - Success
*/
int main(void)
{
int b = 48;
int g = 48;
while (b < 58)
{
g = b + 1;
while (g < 58)
{
putchar(b);
putchar(g);
if (b < 56 || g < 57)
{
putchar(',');
putchar(' ');
}
g++;
}
b++;
}
putchar('\n');
return (0);
}
