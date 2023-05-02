#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints int form the list
 * @h: Linked list pointer to be printed
 *
 * Return: end result
 */

size_t print_listint(const listint *h)
{
	size_t quan = 0;

	while (h)
	{
		printf("%d\n", h->n);
		quan++;
		h = h->next;
	}

	return (quan);
}
