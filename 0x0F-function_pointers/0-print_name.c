#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name.
 * @name: name of person
 * @p:function to print
 * Return: void
 */
void print_name(char *name, void (*f)(char *));
{
	if (name != NULL && p != NULL)
		p(name);
}
