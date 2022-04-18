#include "main.h"

/**
* _strcmp - Write a function that compares two strings
* @s1: Parameter 1
* @s2: Parameter 2
*
* Return: An Integer
*/

int _strcmp(char *s1, char *s2)
{
	int i, ans = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1 != s2)
		{
			if (s1[i] == s2[i])
				continue;

			else
			{
				ans = s1[i] - s2[i];
				break;
			}
		}
return (ans);
}
