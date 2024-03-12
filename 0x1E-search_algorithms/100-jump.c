#include "search_algos.h"
#include <math.h>

/**
* jump_search - a function that searches for a value
* in a sorted array of integers using the Jump search algorithm
* @array: the pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
*
* Return: the first index where value is located
* if value is not present in or if array is NULL, return -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size);
	size_t low = 0;
	size_t high = m;
	size_t i;

	if (array == NULL)
		return (-1);

	while (high < (size - 1))
	{
		if ((value > array[low]) && (value > array[high]))
		{
			printf("Value checked array[%lu] = [%d]\n", low, array[low]);
			printf("Value checked array[%lu] = [%d]\n", high, array[high]);
			low += m;
			high += m;
		}
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
	}
	return (-1);
}
