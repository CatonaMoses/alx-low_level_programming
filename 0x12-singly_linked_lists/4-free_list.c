#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees linked list,all of it
 * @head: list_t lists to be freed,nothing else
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
