#include <stdio.h>
/**
 * main - entry point
 *
 * Description: This program prints all lowercase
 * characters except q and e
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
