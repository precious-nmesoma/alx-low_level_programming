#include "main.h"
/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (*(s + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i)  = *(r13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
