#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...);

/**
* main - entry point
*
* Description: a program that sums an indefinite number of ints
* Return: 0 (success)
*/

int main(void)
{
	int count;

	printf("How many numbers do you want to sum btw 1-5\n");
	scanf("%d", &count);
	printf("Sum is %d\n", sum(count, 1, 2, 3, 4, 5));
	return 0;
}



/**
* sum - function name
* @count: number of arguments
*
* Description: a variadic function that sums an indefinite 
* number of ints
* Return: result of sum
*/

int sum(int count, ...)
{
	va_list args;
	va_start(args, count);

	int i, arg;
	int result = 0;


	for (i = 0; i < count; i++)
	{
		arg = va_arg(args, int);
		result += arg;
	}
	va_end(args);
	return (result);
}
