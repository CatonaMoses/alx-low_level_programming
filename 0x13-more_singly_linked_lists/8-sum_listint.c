#include "lists.h"

/**
 * sum_listint - calculate  sum of the data in the whole listint_t list
 * @head: first node in linked list
 * Still nothing
 * Return:the resulting sum of what was been done
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
