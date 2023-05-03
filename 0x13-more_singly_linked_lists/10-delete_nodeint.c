#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - removes a node from a specific index
 * @head: points to the first element of the list
 * @index: index of the node that has to be removed
 *
 * Return: 1 if working and -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *timed = *head;
	listint_t *present = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(timed);
		return (1);
	}

	while (a < index - 1)
	{
		if (!timed || !(timed->next))
			return (-1);
		timed = timed->next;
		a++;
	}

	present = timed->next;
	timed->next = present->next;
	free(present);

	return (1);
}
