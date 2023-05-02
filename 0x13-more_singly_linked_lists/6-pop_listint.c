#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - removes the head node of the list
 * @head: points to the first element of the list
 *
 * Return: the contents of the element that has
 * been removed or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *timed;
	int quan;

	if (!head || !*head)
		return (0);

	quan = (*head)->n;
	timed = (*head)->next;
	free(*head);
	*head = timed;

	return (quan);
}
