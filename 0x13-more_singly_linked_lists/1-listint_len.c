#include "lists.h"
#include <stdio.h>

/**
 * listint_len - gets amount of elements from the linked list
 * @h: points to the linked list to go through
 *
 * Return: the required response
 */

size_t listint_len(const listint_t *h)
{
	size_t quan = 0;

	while (h)
	{
		quan++;
		h = h->next;
	}

	return (quan);
}
