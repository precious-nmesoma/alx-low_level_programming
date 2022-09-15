#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: Always 0
 *
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size = 0)
		_putchar('\n');


	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= (size - x); y++)
		{
		
			_putchar(' ');

		for (z = 1; z <= height; z++)

				_putchar('#');
		}
		_putchar('\n');
	}
}
