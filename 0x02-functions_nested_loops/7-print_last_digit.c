#include "main.h"
/**
* print_last_digit - function name
* @n: int
*
* Description: a function that prints the last digit
* of a number.
* Return: last digit
*/
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l *= -1;
	}
	_putchar(l + '0');
	return (l);
}
