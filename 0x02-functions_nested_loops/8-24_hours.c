#include"main.h"
/**
* jack_bauer - The called function
*
* Description: A prigram that prints from 00:00 to
* 23:59
* Return: 0 -SUCCESS
*/
void jack_bauer(void)
{
int i, a, d, e;
i = 48;
while (i < 51)
{
_putchar(i);
a = 48;
while (a < 52)
{
_putchar(a);
_putchar(':');
d = 48;
while (d < 54)
{
_putchar(d);
e = 48;
while (e < 58)
{
_putchar(e);
e++;
}
d++;
}
a++;
}
i++;
}
_putchar(10);
}
