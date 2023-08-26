#include "main.h"

/**
 * print_number - function name
 * @n: number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int u_int;

	u_int = n;
	if (n < 0)
	{
		_putchar('-');
		u_int = -n;
	}

	if (u_int / 10 != 0)
	{
		print_number(u_int / 10);
	}
	_putchar((u_int % 10) + '0');

}
