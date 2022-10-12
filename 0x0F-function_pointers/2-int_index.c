#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer.
 * @size: number of elements in the array array
 * @cmp: used to compare values
 * @array: array to search through
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (size > 0 && array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			b = cmp(array[a]);
			if (b)
				break;
		}
	if (a < size)
		return (a);
	}
	return (-1);
}
