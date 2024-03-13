#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_index, j, jump_size;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump_size = (size_t)sqrt((double)size);
	jump_index = 0;
	j = 0;

	do {
		prev = list;
		j++;
		jump_index = j * jump_size;

		while (list->next && list->jump_index < jump_index)
			list = list->next;

		if (list->next == NULL && jump_index != list->jump_index)
			jump_index = list->jump_index;

		printf("Value checked at index [%d] = [%d]\n", (int)jump_index, list->n);

	} while (jump_index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->jump_index, (int)list->jump_index);

	for (; prev && prev->jump_index <= list->jump_index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->jump_index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
