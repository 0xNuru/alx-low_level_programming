#include <stdio.h>
/**
 * main - entry point
 *
 * Description: this program prints all singledigit nums
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
