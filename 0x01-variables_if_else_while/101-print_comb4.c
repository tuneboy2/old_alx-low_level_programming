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

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (a < b && b < c)
				{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a < 7)
				{
				putchar(',');
				putchar(' ');
				}
				}
			c++;
			}
		b++;
		}
	a++;
	}
putchar(10);
return (0);
}
