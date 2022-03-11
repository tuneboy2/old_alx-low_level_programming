#include <stdio.h>
/**
* main - void
*
* Description: This is the entry point for a C program
* Return: 0
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
if (c == 'q')
{
continue;
}
if (c == 'e')
{
continue;
}
}
putchar('\n');
return (0);
}
