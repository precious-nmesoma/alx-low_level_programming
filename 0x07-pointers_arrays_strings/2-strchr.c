#include "main.h"
#define NULL 0
/**
 * _strchr - locate 1st occurrence of char in string and returns pointer there
 * @s: string to search
 * @c: character to search for c
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
