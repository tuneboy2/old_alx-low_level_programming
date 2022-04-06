#include <stdio.h>

/**
* main - A program that prints all possible different combinations of 2 digits.
*
* Return: 0 - SUCCESS
*/

int main(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
