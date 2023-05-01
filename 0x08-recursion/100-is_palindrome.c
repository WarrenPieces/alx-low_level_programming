#include "main.h"
#include <stdio.h>

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks ifthe input is a palindrome or not
 * @s: the string to be reversed
 *
 * Return: 1 if its a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of the inpu (a string)
 * @s: string to calculate the length of
 *
 * Return: the length of input or a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - repetitively checks teh characters for palindromes
 * @s: the string to be checked
 * @i: the iterator
 * @len: the length of said string
 *
 * Return: 1 if palindrome and 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);

	return (check_pal(s, i + 1, len - 1));
}
