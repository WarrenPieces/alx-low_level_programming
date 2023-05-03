#include "lists.h"

/**
 * free_listint_safe - this free's a linked list
 * @h: points to the first node in the list
 *
 * Return: number of items in the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t dur = 0;
	int clx;
	listint_t *timed;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		clx = *h - (*h)->next;
		if (clx > 0)
		{
			timed = (*h)->next;
			free(*h);
			*h = timed;
			dur++;
		}
		else
		{
			free(*h);
			*h = NULL;
			dur++;
			break;
		}
	}

	*h = NULL;

	return (dur);
}
