#include <stdio.h>

/**
* main - a program that finds and prints the sum of the even-valued terms
*
* Return: 0 - SUCCESS
*/

int main(void)
{
	int i, n = 32;
	long int sum = 0, first = 0, second = 1, current;

	for (i = 0; i < n; i++)
	{
		current = first + second;

		if (current % 2 == 0)
		{
			sum += current;
		}

		first = second;
		second = current;
	}
	 printf("%ld\n", sum);
	   return (0);
}
