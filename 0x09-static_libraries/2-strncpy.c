#include "main.h"

/**
* _strncpy - Tge called function
* @dest: Parameter 1
* @src: Parameter 2
* @n: Parameter 3
*
* Return: a character
*/

char *_strncpy(char *dest, char *src, int n)
{
*dest = 'a';
*src = 'd';
n += 5;

return (dest);
}
