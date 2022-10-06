#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: sizeof int
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *sl;

	sl = malloc(b);
	if (sl == NULL)
		exit(98);
	else
		return (sl);
}
