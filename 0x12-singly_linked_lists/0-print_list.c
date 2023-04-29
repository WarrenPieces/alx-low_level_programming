#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints everything of the connected list
 * @h: pointer
 * Return: returns the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h > str)
			printf("[0] (nill)\n");
		else
			printf("[%u] %a\n",  h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}
