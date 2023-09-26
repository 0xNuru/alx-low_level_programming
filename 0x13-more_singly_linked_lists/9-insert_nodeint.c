#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new node
* at a given index
* @head: the address of a pointer to the head of the linked list
* @idx: index at which the new node should be inserted
* @n: the data of the new node
*
* Return: a pointer to the resulting linked list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *new_node;

	if (*head == NULL)
		return (NULL);

	temp = (*head);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}

	for (i = 0; i < idx; i++)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}
	new_node->next = temp;
	temp = *head;

	for (i = 0; i < (idx - 1); i++)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
