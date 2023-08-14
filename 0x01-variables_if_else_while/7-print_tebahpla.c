#include <stdio.h>
/**
 * main - entry point
 *
 * Description:this program that prints the lowercase
 * alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
