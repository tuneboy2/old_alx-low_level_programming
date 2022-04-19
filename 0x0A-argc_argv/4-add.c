#include <stdio.h>
#include <stdlib.h>

/**
* main - The function that accepts an argument
* @argc: The argument count parameter
* @argv: The string of an array prameter
*
* Return: 0 - SUCCESS
*/

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*(argv[i])) > 47 && (*(argv[i])) < 58)
			{
				sum += atoi(argv[i]);
				if (i == argc - 1)
				printf("%d\n", sum);
			}

			else
			{
				printf("Error\n");
				break;
			}
		}
		}

	else
		printf("0\n");

return (EXIT_SUCCESS);
}
