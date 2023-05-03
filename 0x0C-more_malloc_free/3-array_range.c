#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 * Christo Copyrighted
 */

int *array_range(int min, int max)
{
	int *wer;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	wer = malloc(sizeof(int) * size);

	if (wer == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		wer[i] = min++;

	return (wer);
}
