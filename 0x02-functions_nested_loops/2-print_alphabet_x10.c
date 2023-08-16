#include "main.h"
/**
* main - entry point
*
* Description: a function that prints the alphabet tenfold
* Return: 0 (success)
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
