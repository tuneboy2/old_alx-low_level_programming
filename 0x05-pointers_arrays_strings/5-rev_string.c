#include"main.h"
#include <stdio.h>

/**
* rev_string - The called function
* @s: Tge parameter used when the function is called
*
* Description: A function that reverses a string
* Return: void
*/
void rev_string(char *s)
{
	int j = 0;

	while (*s != '\0')
	{
		s++;
		j++;
	}
}
