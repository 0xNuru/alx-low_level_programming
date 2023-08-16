#include "main.h"
/**
* main - entry point
*
* Description: a function that prints the alphabet
* Return: 0 (success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
