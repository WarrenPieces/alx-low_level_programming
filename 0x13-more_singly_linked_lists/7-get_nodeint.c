#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the node from the list by a specific index
 * @head: the first node on the list
 * @index: the index of the node that has to be returned
 *
 * Return: the pointer to the node we want, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *timed = head;

	while (timed && a < index)
	{
		timed = timed->next;
		a++;
	}

	return (timed ? timed : NULL);
}
