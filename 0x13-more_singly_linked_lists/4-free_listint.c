#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free's a singly linked list
 * @head: the list to be free'd
 *
 * Return: there will be none
 */

void free_listint(listint_t *head)
{
	listint_t *timed;

	while (head)
	{
		timed = head->next;
		free(head);
		head = timed;
	}
}
