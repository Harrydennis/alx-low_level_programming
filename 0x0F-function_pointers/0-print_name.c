#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name using a pointer to function
 * @name: sring to add
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
