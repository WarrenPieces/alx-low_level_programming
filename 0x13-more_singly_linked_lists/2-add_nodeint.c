#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node
 * @head: points to the first node of the list
 * @n: what will be inserted into the new node
 *
 * Return: the pointer to the new node or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added;

	added = malloc(sizeof(listint_t));
	if (!added)
		return (NULL);

	added->n = n;
	added->next = *head;
	*head = added;

	return (added);
}
