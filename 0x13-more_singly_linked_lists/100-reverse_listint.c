#include "lists.h"

/**
* reverse_listint - a function that reverses a linked list
* @head: the address of a pointer to the linked list
*
* Return: the address of the resulting LL
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head)->next = prev;

	return (*head);
}
