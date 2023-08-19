#include "main.h"

/**
* print_diagonal - function name
*
* Description: a function that draws a diagonal line 
* on the terminal.
* Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
