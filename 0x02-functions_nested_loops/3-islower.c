#include "main.h"
/**
* _islower - main
* @c: The integer c used in the program
*
* Description: A program that checks for lowercase* character
* Return: 0 - SUCCESS
*/
int _islower(int c)
{
if (c > 97 || c < 123)
{
return (1);
}
else
{
return (0);
}
_putchar(10);
return (0);
}
