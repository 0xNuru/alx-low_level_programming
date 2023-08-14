#include <stdio.h>
/**
 * main - entry point
 *
 * Description: This program prints the lowecase and
 * uppercase letters
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
