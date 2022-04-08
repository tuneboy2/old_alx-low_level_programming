#include <stdio.h>

/**
* main - Write a program that prints the first 50
* Fibonacci numbers, starting with 1 and 2, followed
* by a new line
*
* Return: 0 - SUCCESS
*/

int main(void)
{
	int i, n = 50;
	long int first = 0, second = 1, current;

	for (i = 0; i < n; i++)
	{
		current = first + second;
		printf("%ld", current);

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
