#include "main.h"

/**
* get_endianness - a function that checks endianness (byte order)
*
* Return: (0) if big endian, 1 if little endian
*/

int get_endianness(void)
{
	/* int that will be used to examine bytes to determine endearness */
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}
