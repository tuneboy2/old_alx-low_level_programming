#include <stdio.h>

/**
* main - A program that prints ll possible combinatio
* n of two two-digit numbers.
*
* Return: 0 - SUCCESS
*/

int main(void)
{
int a, b, c, d;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			d = b + 1;
			c = a;
			while (c < 10)
			{
				while (d < 10)
				{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				d++;

				if (a < 10)
				{
					putchar(',');
					putchar(' ');
				}
				}
			d = 0;
			c++;
			}
		b++;
		}
	a++;
	}
putchar(10);
return (0);
}
