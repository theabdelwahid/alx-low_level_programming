#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main prints if number is zero, negative or positive
 *return: Always success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	return (0);
}
