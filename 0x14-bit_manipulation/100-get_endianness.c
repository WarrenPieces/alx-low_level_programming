#include "main.h"
#include <stdio.h>

/**
 * get_endianness - this checks if a machine is a little of big
 * endian
 *
 * Return: 0 if its big and 1 if its little
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
