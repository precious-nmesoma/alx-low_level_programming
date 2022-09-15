#include "main.h"
/**
 *  _isupper - check if the letter is upper
 *  @p: the number to be checked
 *  Return: 1 for upper letter and 0 for any else
 */
int _isupper(int p)
{
	if (p >= 65 && p <= 90)
		return (1);
	else
		return (0);
}
