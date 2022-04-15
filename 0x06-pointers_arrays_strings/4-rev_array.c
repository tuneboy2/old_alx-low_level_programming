#include "main.h"

/**
* reverse_array - A function that reverses the content of an array of integers.
* @a: A pointer to the array to be reversed.
* @n: The number of elements of the array
*
* Return: Void
*/

void reverse_array(int *a, int n)
{
	int i, j, k, temp;

	for (i = 0; i < n; i++)
		;

	k = i;
	for (j = 0, i--; j < k / 2; j++, i--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
