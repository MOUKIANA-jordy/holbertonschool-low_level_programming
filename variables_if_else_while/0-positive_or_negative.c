#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main -Entry point
 *Return= always succes (0)
 */
int main(void)
{
	int n;

	srand(time(0))
	n = rand()  - RAND_MAX / 2;

	printf("%d \n", x);

	if (x > 0)
	{
		printf("%d is positive \n", n);
	}
	else if (x < 0)
	{
		printf("%d is negative \n", n);
	}
	else
	{
		printf("%d is zero \n", n);
	}
	return (0);
}
