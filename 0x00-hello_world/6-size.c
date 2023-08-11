#include <stdio.h>
/**
 * main - Entry point
 *
 * Size is not grandeur, and territory does not make a nation
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of char: %lu, bytes(s)\n", sizeof(c));
	printf("Size of int: %lu, bytes(s)\n", sizeof(i));
	printf("Size of long: %lu, bytes(s)\n", sizeof(l));
	printf("Size of ll: %lu, bytes(s)\n", sizeof(ll));
	printf("Size of char: %lu, bytes(s)\n", sizeof(f));
	return (0);
}
