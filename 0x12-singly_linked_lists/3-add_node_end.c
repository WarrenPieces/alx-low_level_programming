#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: double pointer to the list
 * @str: str that will be placed in the new node
 *
 * Return: address of the new element or else NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added;
	list_t *timed = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	added = malloc(sizeof(list_t));
	if (!added)
		return (NULL);

	added->str = strdup(str);
	added->len = len;
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
