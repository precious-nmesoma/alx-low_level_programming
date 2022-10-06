#include "main.h"
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers.
 * @min: first integer number
 * @max: second integer number
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int a, b;
	int *s;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	s = malloc(sizeof(int) * b);
	if (s == NULL)
		return (NULL);

	for (a = 0; a < b; a++, min++)
	{
		s[a] = min;
	}
	return (s);
}


