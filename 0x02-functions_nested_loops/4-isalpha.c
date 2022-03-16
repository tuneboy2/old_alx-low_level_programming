#include "main.h"
/**
* _isalpha - called function
* @c: The integer that is used when the function
* is called
*
* Description: The called function checks for
* letters and return 1 or 0
* Return: 0 - SUCCESS
*/
int _isalpha(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else if (c > 96 && c < 123)
{
return (1);
}
else
return (0);
}
