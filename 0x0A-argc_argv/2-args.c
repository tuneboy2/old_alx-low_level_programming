#include <stdio.h>

/**
* main - A function that accepts arguments as parameters
* @argc: The argument count parameter
* @argv: The strings of an array parameter
*
* Return: 0 - SUCCESS
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
