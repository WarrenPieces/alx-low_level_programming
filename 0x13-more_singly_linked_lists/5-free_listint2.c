#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free's a list
 * @head: refers to the list that should be removed
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *timed;

	if (head == NULL)
		return;

	while (*head)
	{
		timed = (*head)->next;
		free(*head);
		*head = timed;
	}

	*head = NULL;
}
