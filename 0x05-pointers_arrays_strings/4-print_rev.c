#include "main.h"

/**
* print_rev - function name
* @s: str
*
* Description: a function that prints string in reverse
* Return: void
*/

void print_rev(char *s)
{
	int i, length, j;

	i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	s = s - i;
	length = i--;

	for (j = length; j > 0; j--)
	{
		_putchar(*(j + s));
	}
}
