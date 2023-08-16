#include "main.h"
/**
* print_sign - function name
* @n: int to be checked
*
* Description: function that prints the sign of a number.
* Return: 0  if number is zero
* _Return: 1 if number is positive
* __Return: -1 if number is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
