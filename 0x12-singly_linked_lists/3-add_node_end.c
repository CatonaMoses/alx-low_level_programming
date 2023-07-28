#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - it then adds  a new node at  end of a linked list,all
 * @head: double pointer to list_t list,all of it
 * @str: string to put in new node,all of new node
 *
 * Return: address of  new element, or NULL if it failed,nothing else
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
