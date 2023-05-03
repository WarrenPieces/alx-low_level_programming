#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills with a byte constantly
 * @s: area of the memory to be filled
 * @b: character that should be copied
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *wer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	wer = malloc(size * nmemb);

	if (wer == NULL)
		return (NULL);

	_memset(wer, 0, nmemb * size);

	return (wer);
}
