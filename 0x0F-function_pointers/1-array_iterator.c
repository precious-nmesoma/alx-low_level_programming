#include "function_pointers.h"
/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: array to execute func on
 * @size: size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
