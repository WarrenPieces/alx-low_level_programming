#include "main.h"
#include <stdio.h>

/**
 * get_bit - retrieves the value from a bit in decimal form
 * @n: the number to search
 * @index: index of the bit
 *
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int quill;

	if (index > 63)
		return (-1);

	quill = (n >> index) & 1;

	return (quill);
}
