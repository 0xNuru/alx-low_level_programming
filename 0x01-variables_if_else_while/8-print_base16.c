#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints all the
 * numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
