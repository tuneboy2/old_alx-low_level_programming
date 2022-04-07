#include<stdio.h>
#include "main.h"
/**
* print_to_98 - The called function
* @n: The integer used when the function is called
*
* Description: A function that prints numbers from
* n to 98.
* Return: 0 -SUCCESS
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;

			if (n < 99)
			{
				printf(", ");
			}
		}
	}

	else
	{
		while (n > 97)
		{
			printf("%d", n);
			n--;

			if (n > 97)
			{
				printf(", ");
			}
		}
	}
putchar(10);
}
