#include "main.h"
/**
 * _isdigit - that checks for a digit (0 through 9).
 * @p: number that will be tested
 * Return: return 1 if the number is a digit else return 0
 */
int _isdigit(int p)
{
	if (p >= 48 && p <= 57)
		return (1);
	else
		return (0);
}

