#include "main.h"

/**
* print_line - function name
* @n: length of line
* 
* Description: a function that draws a straight line 
* in the terminal.
* Return: void
*/

void print_line(int n)
{
	int i;
	
	if (n = 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i <= n; i++)
		_putchar('_');
	}
}
