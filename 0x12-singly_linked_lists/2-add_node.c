#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the list at the beginning
 * @head: double pointer to the list
 * @str: new string to add in the node of the list
 *
 * Return: the address of the new element or else NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *added;
	unsigned int len = 0;

	while (str[len])
		len++;

	added = malloc(sizeof(list_t));
	if (!added)
		return (NULL);

	added->str = strdup(str);
	added->len = len;
	added->next = (*head);
	(*head) = added;

	return (*head);
}
