#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints the alphabet
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
