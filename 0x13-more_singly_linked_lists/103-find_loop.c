#include "lists.h"
/**
* find_listint_loop - a function that finds the loop in a linked list
* @head: a pointer to the linked list
*
* Return: the address of the node where the loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp;
	listint_t *prev;

	temp = head;
	prev = head;

	while (head && temp && temp->next)
	{
		head = head->next;
		temp = temp->next->next;


		if (head == temp)
		{	
			head = prev;
			prev = temp;
			while (1)
			{
				temp = prev;
				while (temp->next != head && temp->next != prev)
				{
					temp = temp->next;
				}	
				if (temp->next == head)
					break;
				head = head->next;
			}
			return (temp->next);
		}
	}
	return (NULL);
}
