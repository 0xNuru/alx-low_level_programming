#include <stdarg.h>

/**
* sum_them_all - function name
* @n: number of ints to be summed
*
* Description: a function that returns the sums of all
* its parameters
* Return: sum of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int arg, i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		result += arg;
	}
	va_end(args);

	return (result);
}
