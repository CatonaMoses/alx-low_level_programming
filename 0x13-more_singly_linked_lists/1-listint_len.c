#include "lists.h"

/**
 * listint_len - return number of all the elements in a linked lists
 * @h: linked list of type listint_t to traverse of codes
 *Still MyCode
 * Return: numbers of the whole nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
