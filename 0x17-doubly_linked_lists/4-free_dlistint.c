#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list and other codes
 * codes
 * @head: pointer to head of the list being used
 * Return: nothing to be used
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
