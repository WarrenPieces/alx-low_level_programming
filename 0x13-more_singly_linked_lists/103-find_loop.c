#include "lists.h"

/**
 * find_listint_loop - finds the loop in the list
 * @head: the list that should be searched
 *
 * Return: where the loop starts, otherwise NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *q = head;
	listing_t *w = head;

	if (!head)
		return (NULL);

	while (q && w && w->next)
	{
		w = w->next->next;
		q = q->next;
		if (w == q)
		{
			q = w;
			while (q != w)
			{
				q = q->next;
				w = w->next;
			}
			return (w);
		}
	}

	return (NULL);
}
