#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses the linked list
 * @head: points to the first node of the list
 *
 * Return: points to the first node of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *b = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = next;
	}

	*head = b;

	return (*head);
}
