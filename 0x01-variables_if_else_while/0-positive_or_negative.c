#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determine if number is positive or negative
 * Description: Program will asssign a random number
 * It is executed
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positve\n", n);
	return (0);
}
