#include <stdio.h>

/**
* print_diagsums - function name
* @a: array
* @size: size of array
*
* Description: a function that prints the alphabet
* Return: 0 (success)
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
