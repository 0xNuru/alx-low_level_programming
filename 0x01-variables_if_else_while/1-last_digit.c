#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - display the last digit of a number
 *
 * Description: This program will assign a random number to
 * the variable n each time it is executed
 * the last digit of the number stored in the variable n
 * will be printed
 * Return: return 0 for success
 */
int main(void)
{
	int n;

	int last_digit;

	char *concat;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	concat = (last_digit > 5) ? "and is greater than 5"
		: (last_digit == 0) ? "and is 0"
		: "and is less than 6 and not zero";

	printf("Last digit of %d is %d %s\n", n, last_digit, concat);

	return (0);
}
