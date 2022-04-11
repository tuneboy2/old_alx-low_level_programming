#include <stdio.h>

/**
* main - This prgrams prints the name of the program
* it was compiled from
*
* Return: 0 - SUCCESS
*/

int main(void)
{
	printf("%s\n", __BASE_FILE__);

	return (0);
}
