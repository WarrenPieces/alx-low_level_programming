#include "main.h"

/**
 * _strlen_recursion - gives the length of the string
 *
 * @s: the string that has to be measured
 *
 * Return: returns the length
 */

int _strlen_recursion(char *s)
{
	int leng = 0;

	if (*s)
	{
		leng++;
		leng += _strlen_recursion(s + 1);
	}

	return (leng);
}
