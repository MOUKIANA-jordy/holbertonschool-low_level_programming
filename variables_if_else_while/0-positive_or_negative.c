#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main -Entry point
 *Return= always succes (0)
 */
int main(void)
{
int x;
srand(time(0));
x = rand()  - RAND_MAX / 2;

printf("%d \n", x);

if (x > 0)
{
printf("%d is positive \n", x);
}
else if (x < 0)
{
printf("%d is negative \n", x);
}
else
{
printf("%d is zero \n", x);
}
return (0);
}

