#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: number of elements in the arrY
 * @size: size in bytes of the elements
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int e;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (e = 0; e < (nmemb * size); e++)
		p[e] = 0;
	return (p);
}
