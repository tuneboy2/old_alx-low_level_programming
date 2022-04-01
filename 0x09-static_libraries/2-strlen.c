#include "main.h"

/**
* _strlen - The called function
* @s: Parameter used when called
*
* Description: Returns the length of a string
* Return: 0 - SUCCESS
*/

int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
s++;
count++;
}
return (count);
}
