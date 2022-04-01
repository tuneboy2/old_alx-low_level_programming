#include <stdio.h>
#include <stdlib.h>

/**
* main - A function that accepts arguments
* @argc: The argument count parameter
* @argv: The strings of an array parameter
*
* Return: 0 - SUCCESS
*/

int main(int argc, char *argv[])
{
	int i = 3;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc == i)
	{
		printf("%d\n", a * b);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
