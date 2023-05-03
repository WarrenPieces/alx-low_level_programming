#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sums up all the data from the pointed list
 * @head: the first node of the list
 *
 * Return: the end result
 */

int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *timed = head;

	while (timed)
	{
		res += timed->n;
		timed = timed->next;
	}

	return (res);
}
