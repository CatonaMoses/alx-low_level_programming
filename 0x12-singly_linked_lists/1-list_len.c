#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns  number of elements in all of the  linked list
 * @h: pointer to all of  the list_t list,all of it
 *
 * Return: numbers of the  elements in h,all of them
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
