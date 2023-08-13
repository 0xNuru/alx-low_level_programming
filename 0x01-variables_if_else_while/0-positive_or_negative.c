#include <stdlib.h>
#include <time.h>
/* more headers go there */
#include <stdio.h>
/**
 * main - prints the sign
 *
 * Description: This program will assign a random number to
 * a variable n each
 * time it is executed
 * it will also print the sign attached to the number each
 * time the code is run
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
		printf("%d is negative\n", n);
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
