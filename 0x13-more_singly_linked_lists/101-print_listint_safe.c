#include "lists.h"

/* function prototype */
size_t ll_len(const listint_t *head);

/**
* print_listint_safe - a function that prints a linked list
* @head: a pointer to the head of the ll
*
* Return: the number of nodes in the ll
*/

size_t print_listint_safe(const listint_t *head)
{
	/* declare variables to keep track */
	size_t len, i;

	/* call the ll_len function and pass the linked list */
	len = ll_len(head);

	if (len == 0)
	{
		for (; head != NULL; len++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (len);
}


/**
* ll_len - function to count number of nodes
* @head: pointer to the head of the linked list
*
* Description: a function that prints the alphabet
* Return: 0 (success)
*/
size_t ll_len(const listint_t *head)
{
	const listint_t *temp, *next;
	size_t len = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	next = (head->next)->next;

	while (next)
	{
		if (temp == next)
		{
			temp = next;
			while (temp != next)
			{
				len++;
				temp = temp->next;
				next = next->next;
			}

			temp = temp->next;
			while (temp != next)
			{
				len++;
				temp = temp->next;
			}
			return (len);
		}
		temp = temp->next;
		next = (next->next)->next;
	}

	return (0);
}
