#include <stdio.h>

/**
* main - A program that finds and prints the first 98
* Fibonacci numbers, starting with 1 and 2, followed
* by a new line
*
* Return: 0 - SUCCESS
*/

int main(void)
{
	int i, n = 98;
	double first = 0, second = 1, current;

	for (i = 0; i < n; i++)
	{
		current = first + second;
		printf("%.0f", current);

		first = second;
		second = current;

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
return (0);
}
