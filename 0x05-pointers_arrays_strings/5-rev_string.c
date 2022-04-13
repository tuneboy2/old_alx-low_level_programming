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
	int i, j, temp, k, count;

	for (i = 0; s[i] != '\0'; i++)
	{
	count++;
	}

	k = i;
	for (i--, j = 0; j < k / 2; i--, j++)
	{
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
	}
}
