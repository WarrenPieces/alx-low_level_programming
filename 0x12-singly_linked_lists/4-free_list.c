#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the list to be free'd
 */

void free_list(list_t *head)
{
	list_t *timed;

	while (head)
	{
		timed = head->next;
		free(head->str);
		free(head);
		head = timed;
	}
}
