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

	if (argc != i)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
