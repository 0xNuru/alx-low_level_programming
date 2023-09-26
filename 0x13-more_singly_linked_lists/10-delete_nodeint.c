#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes a node at an index
* @index: index of the node that should be deleted
* @head: the address of a pointer to the head of the LL
*
* Return: 1 if succeeded, otherwise -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next;

	temp = *head;

	if (index != 0)
	{
		for (i = 0; i < index && temp != NULL; i++)
			temp = temp->next;
	}

	if (temp == NULL || (temp->next == NULL && index != 0))
		return (-1);

	next = temp->next;

	if (index != 0)
	{
		temp->next = next->next;
		free(next);
	}
	else
	{
		free(temp);
		*head = next;
	}
	return (1);

}
