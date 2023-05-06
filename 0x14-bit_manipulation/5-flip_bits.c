#include "main.h"
#include <stdio.h>

/**
 * flip_bits - changes a number of bits with it's count
 * @n: the first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, quin = 0;
	unsigned long int now;
	unsigned long int none = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		now = none >> a;
		if (now & 1)
			quin++;
	}

	return (quin);
}
