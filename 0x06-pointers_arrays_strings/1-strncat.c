#include "main.h"
/**
 * _strncat- function that concatenates two strings.
 * @src: parameter to append to dest
 * @dest: parameter to be appended to
 * @n: maximum number bytes usable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
