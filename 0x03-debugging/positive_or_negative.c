#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - void
* @i: The integer used when the function is called
*
* Description: return an integer 0 to whom called
* it
* Return: return 0 (Success)
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
