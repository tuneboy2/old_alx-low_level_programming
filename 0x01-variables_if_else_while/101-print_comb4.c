#include<stdio.h>
/**
* main - void
*
* Description: A progtam that prints all possible
* combinations of three digits
* Return: 0 - Success
*/
int main(void)
{
int a, b, c;
a = 48;
b = 48;
c = 48;
while (a < 58)
{
b = a + 1;
while (b < 58)
{
c = b + 1;
while (c < 58)
{
putchar(a);
putchar(b);
putchar(c);
if (a < 55 || b < 56 || c < 57)
{
putchar(',');
putchar(' ');
}
c++;
}
b++;
}
a++;
}
putchar('\n');
return (0);
}
