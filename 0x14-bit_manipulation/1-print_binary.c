#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a decimal number thats the same as a binary
 * @n: the number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int a, math = 0;
	unsigned long int abc;

	for (a = 63; a >= 0; a--)
	{
		abc = n >> a;

		if (abc & 1)
		{
			_putchar('1');
			math++;
		}
		else if (math)
			_putchar('0');
	}
	if (!math)
		_putchar('0');
}
