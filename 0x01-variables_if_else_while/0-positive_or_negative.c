#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - void
*
* Description: return an integer 0 to whom called it
* Return: return 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
