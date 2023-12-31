#include "lists.h"

/**
* free_list - a function that frees a linked list
* @head: a pointer to the head of the linked list
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
