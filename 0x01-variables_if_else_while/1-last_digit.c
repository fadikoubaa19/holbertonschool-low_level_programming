#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * print size of variables
 * Return: Always (Success)
 */
int main(void)
{
int x;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (x == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
return (0);
}
