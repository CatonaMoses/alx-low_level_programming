#include "lists.h"

/**
 * get_dnodeint_at_index - returnNth value of list
 * @head: pointer to head of the list being used
 * codes used
 * @index: index of node to search for, starting from 0
 * Return: nothingin node or null value
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
