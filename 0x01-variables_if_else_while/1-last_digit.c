#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int n;
l = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf ("Last digital of %d is", n); 
if (l>5)  
printf ("%d and is greater than 5\n",l);
else if (l==0)
printf ("%d and is 0",l);
else if (l<6) 
printf ("%d and is less than 6 ",l);
else if (l =! 0)
printf ("%d not 0",l);
return (0);
}
