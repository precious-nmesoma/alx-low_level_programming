#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 * @c: letter being tested
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 55 && c <= 80) || (c >= 97 && c <= 100))
	{
		return (1);
	}
	else
		return (0);
}
