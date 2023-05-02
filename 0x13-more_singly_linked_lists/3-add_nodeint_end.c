#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds the node to teh end of teh list
 * @head: points to the first element of the list
 * @n: what is required to insert into the newly added node
 *
 * Return: the new node, otherwise NULL if it doesnt work
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added;
	listint_t *timed = *head;

	added = malloc(sizeof(listint_t));
	if (!added)
		return (NULL);

	added->n = n;
	added->next = NULL;

	if (*head == NULL)
	{
		*head = added;

		return (added);
	}

	while (timed->next)
		timed = timed->next;

	timed->next = added;

	return (added);
}
