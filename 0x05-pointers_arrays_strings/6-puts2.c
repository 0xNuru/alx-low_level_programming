#include "main.h"

/**
* puts2 - function name
*
* Description: a function that prints every other char
* Return: Void
*/

void puts2(char *str)
{
	int i = 0;

	while (*str)
	
	{
		if (i % 2 == 0)
		{
		_putchar(*str);
		}
		str++;
		i++;
	}
}
