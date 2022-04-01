#include "main.h"

/**
* _abs - The called function
* @c: The integer used when the function is
* called
*
* Description: It computes the absolute value of
* an integer
* Return: 0 - SUCCESS
*/

int _abs(int c)
{
if (c < 0)
{
return (-1 * c);
}
else
{
return (c);
}
_putchar(10);
return (0);
}
