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
	int a, b, i, j;

	a = 0;
	while (a < 3)
	{
		b = 0;
		while (b < 4)
		{
			i = 0;
			while (i < 6)
			{
				j = 0;
				while (j < 10)
				{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(':');
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(10);
				j++;
				}
			i++;
			}
		b++;
		}
	a++;
	}
}
