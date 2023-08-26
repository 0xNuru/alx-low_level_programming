#include "main.h"

/**
 * print_number - function name
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int long_int;

	long_int = n;
	if (n < 0)
	{
		_putchar('-');
		long_int = -n;
	}

	if (long_int / 10 != 0)
	{
		print_number(long_int / 10);
	}
	_putchar((long_int % 10) + '0');

}
