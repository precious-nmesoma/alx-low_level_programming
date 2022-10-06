#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: first n bytes
 * Return: char
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *str;
	char *nul = "";
	unsigned int r, s;

	r = s = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[r] != '\0')
		r += 1;
	while (s2[s] != '\0')
		s += 1;

	s++;
	if (n >= s)
		n = s;
	str = malloc(sizeof(*str) * n + (r + 1));
	if (str == NULL)
		return (NULL);
	r = 0;
	while (s1[r] != '\0')
	{
		str[r] = s1[r];
		r += 1;
	}
	s = 0;
	while (s2[s] != '\0' && s < n)
	{
		str[r] = s2[s];
		r++;
		s++;
	}
	str[r] = '\0';
	return (str);
}
