#include <stdio.h>

int sub(int, int);

void main()
{
	int s = 0;

	int (*f_ptr)(int, int) = sub;

	s = f_ptr(5, 2);
	printf("the diff btw 5 & 2 is: %d\n", s);
}

int sub(int a, int b)
{
	return a - b;
}
