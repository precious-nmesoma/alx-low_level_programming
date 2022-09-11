#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)


{
	int first _nums;
	int second_nums;

	for (first_nums = 0; first_nums < 100; first_nums++)
	{
	for (second_nums = first_nums + 1; second_nums < 100; second_nums++)
	{
		putchar (first_nums / 10 + '0');
		putchar (first_nums % 10 + '0');

	putchar(' ');


	putchar (second_nums / 10 + '0');
	putchar (secong_nums % 10 + '0');

	if (first_nums == 98 && second_nums == 99)
	{
	break;
	}

	putchar(',');
	putchar(' ');

	}
	}
	putchar('\n');
	return (0);
}
