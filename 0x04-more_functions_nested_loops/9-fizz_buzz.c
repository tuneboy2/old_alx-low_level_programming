#include <stdio.h>

/**
* main - function name
*
* Description: Print Fizz Buzz
* Return: 0 - SUCCESS
*/

int main(void)
{
int a, b, c, d;
for (a = 1; a < 100; a++)
{
b = (a % 3);
c = (a % 5);
d = (a % 15);

if (b == 0)
{
printf("Fizz");
}

else if (c == 0)
{
printf("Buzz");
}

else if (d == 0)
{
printf("FizzBuzz");
}

else
{
printf("%d", a);
}

printf(" ");
}

return (0);
}
