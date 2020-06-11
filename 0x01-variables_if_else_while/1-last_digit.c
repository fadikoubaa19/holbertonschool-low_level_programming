#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*print size of variables
*Return: Always 0 (Success)
*/
int main(void)
{
int n, l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
printf("Last digital of %d  is ", n);
if (l > 5)
printf("%d and is %d greater than 5\n", l, l);
else if (l == 0)
printf("%d and is 0\n", l);
else if (l < 6)
printf("%d and is less than 6 and not 0\n", l);
return (0);
}
