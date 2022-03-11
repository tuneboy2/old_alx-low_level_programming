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
if (c != 'q' && c != 'e')
putchar(c);
c++;
}
putchar('\n');
return (0);
}
