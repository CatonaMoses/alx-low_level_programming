#include "lists.h"

/**
 * pop_listint - delete head node of the linked list
 * @head: pointer to have been first element in the linked list
 * Nothing but just chills
 * Return: data that is in elements that was then deleted,
 * or 0 if the list is empty and has nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
