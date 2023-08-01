#include "lists.h"

/**
 * print_listint - print all elements of  linked lists not forgeting anything
 * @h: linked lists of the types listint_t to be printed
 *Still a my code
 * Return: number of nodes that was reached
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
