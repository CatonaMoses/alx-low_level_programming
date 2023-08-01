#include "lists.h"

/**
 * add_nodeint - add new node at beginning of  linked list of the code
 * @head: pointer to the first of that  node in the list in the code
 * @n: data inserted in the whole  new node
 * Just chilling around
 * Return: pointer to all new nodes or NULL if it fails,if the code fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
