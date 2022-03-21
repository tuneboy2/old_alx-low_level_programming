#include "main.h"
#include <stdio.h>
/**
* print_array - The called function
* @a: Parameter 1
* @n: Parameter 2
*
* Description: A function that print arrays of integer
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);

	if (i != 4)
	printf(", ");

	}
printf("\n");
}
