#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - start of function to print name using pointer to function
 * @name: name to print
 * @f: pointer to function to use
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
