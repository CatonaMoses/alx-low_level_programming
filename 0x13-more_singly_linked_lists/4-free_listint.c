#include "lists.h"

/**
 * free_listint - free all the linked list
 * @head: listint_t lists  to be the  freed
 */


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
