#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - appoints memory with malloc
 * @b: how many bytes to place
 *
 * Return: points to the alloctaed memory
 */

void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);

	if (q == NULL)
		exit(98);

	return (q);
}
