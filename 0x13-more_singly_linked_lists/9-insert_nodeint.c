#include "lists.h"

/**
 * insert_nodeint_at_index - insert whole new node in  linked list,
 * at  given position of anything
 * @head: pointer to first node in  list
 * @idx: index where new node is added
 * @n: data inserted in  new node
 * Nothing still going on
 * Return: pointer to new node orof the  NULL value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
