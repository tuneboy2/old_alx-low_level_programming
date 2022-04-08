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
	int i;
	long int first, second, current;

	for (i = 0; i < 47; i++)
	{
		if (i < 1)
		{
			first = 1;
			second = 2;
			current = first + second;
			printf("%ld, %ld, %ld", first, second, current);
		}

		first = second;
		second = current;
		current = first + second;
		printf(", %ld", current);
	}
printf("\n");
return (0);
}
