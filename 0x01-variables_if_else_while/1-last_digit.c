#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - void
*
* Description: This is the entry point of the C program
* Return: return value to integer 0 [Success]
*/
int main(void)
{
int n, m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, m);
}
else if (m == 0)
{
printf("Last digit of %d is %d and is 0\n", n, m);
}
else if (m < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
}
return (0);
}

