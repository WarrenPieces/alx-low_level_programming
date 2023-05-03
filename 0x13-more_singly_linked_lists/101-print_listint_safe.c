#include "lists.h"
#include <stdio.h>

/**
 * recursive_listint - counts the nodes in a looped list
 * @head: points to the head of the list to check
 *
 * Return: 0 if the list is not looped or else the number of nodes
 */

size_t recursive_listint(const listint_t *head)
{
	const listint_t *alx, *blx;
	size_t nd = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	alx = head->next;
	blx = (head->next)->next;

	while (blx)
	{
		if (alx == blx)
		{
			alx = head;
			while (alx != blx)
			{
				nd++;
				alx = alx->next;
				blx = blx->next;
			}

			alx = alx->next;
			while (alx != blx)
			{
				nd++;
				alx = alx->next;
			}

			return (nd);
		}

		alx = alx->next;
		blx = (blx->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - safely prints a list
 * @head: points to the hea dof the list
 *
 * Return: the amount of nodes on the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nd, i = 0;

	nd = recursive_listint(head);

	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nd; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nd);
}
