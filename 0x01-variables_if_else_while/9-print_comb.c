#include <stdio.h>
/**
* main - void
*
* Description: Write a program that prints pos*sible of single-digit numbers
* Return: 0 - Success
*/
int main(void)
{
int x = 0;
while (x < 10)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
