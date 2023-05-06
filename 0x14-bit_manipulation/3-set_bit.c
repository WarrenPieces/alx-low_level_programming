#include "main.h"
#include <stdio.h>

/**
 * set_bit - this sets a bit from the index to 1
 * @n: points to the number that needs to change
 * @index: this refers to the index of teh bit to set to 1
 *
 * Return: 1 when successful and -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
