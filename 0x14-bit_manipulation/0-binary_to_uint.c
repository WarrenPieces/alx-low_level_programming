#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - changes binary to unsigned int
 * @b: contains the binary number, is a string
 *
 * Return:the end result (changed binary to unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int low = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		low = 2 * low + (b[a] - '0');
	}

	return (low);
}
