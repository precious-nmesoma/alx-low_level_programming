#include "main.h"
/**
 * main - void print_alphabet_x10(void)
 * You can only use _putchar twice in your code
 *
 */
void print_alphabet_x10(void);

{
	int alpha1;
	int alpha2;

	for (alpha1 = 0; alpha1 <= 9; alpha1++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}