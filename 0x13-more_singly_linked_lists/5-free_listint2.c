#include "lists.h"

/**
 * free_listint2 - free linked list,not caged anymore
 * @head: pointer to listint_t list to be freed, go out there
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}