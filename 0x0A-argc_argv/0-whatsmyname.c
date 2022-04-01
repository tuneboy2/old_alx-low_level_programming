#include <stdio.h>

/**
* main - The main function which accepts an argument
* as parameters
* @argc: A parameter that counts the number of arguments passed
* @argv: A parameter that contains a string of arrays
*
* Return: 0 -SUCCESS
*/

int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
		printf("%s\n", argv[0]);

	return (0);
}
