#include "main.h"

/**
* swap_int - The called function
* @a: Parameter 1 whuch is an integer
* @b: Parameter 2 which is an integer
*
* Description: The function swaps the value of the two
* parameters
* Return: void
*/

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
