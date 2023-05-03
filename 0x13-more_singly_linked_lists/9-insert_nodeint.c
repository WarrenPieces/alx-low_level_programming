#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a node into the list
 * @head: points to the first node of the list
 * @idx: index where the node will be added
 * @n: information to be inserted in the node
 *
 * Return: the pointer to the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *added;
	listint_t *timed = *head;

	added = malloc(sizeof(listint_t));
	if (!added || !head)
		return (NULL);

	added->n = n;
	added->next = NULL;

	if (idx == 0)
	{
		added->next = *head;
		*head = added;
		return (added);
	}

	for (a = 0; timed && a < idx; a++)
	{
		if (a == idx - 1)
		{
			added->next = timed->next;
			timed->next = added;
			return (added);
		}
		else
			timed = timed->next;
	}

	return (NULL);
}
