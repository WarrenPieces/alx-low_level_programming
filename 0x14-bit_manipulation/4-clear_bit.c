#include "main.h"
#include <stdio.h>

/**
 * clear_bit - this sets a bit's value to 0
 * @n: points to the number that has to change
 * @index: the index of the bit that has to be cleared
 *
 * Return: 1 if successful and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
