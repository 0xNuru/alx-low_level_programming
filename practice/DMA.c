#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
*
* Description: a program to try DMA concepts
* Return: 0 (success)
*/

int main(void)
{
	int n, i, *ptr;
	
	printf("Enter number of ints\n");
	scanf("%d", &n);
	ptr = (int *) malloc(n * sizeof(int));
	
	for (i = 0; i < n; i++)
		*(ptr + i) = i;

	for (i = 0; i < n; i++)
		printf("%d\n", *(ptr + i));
}
