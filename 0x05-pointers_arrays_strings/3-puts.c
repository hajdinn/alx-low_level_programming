#include "main.h"
/**
 * _puts - start of function a stri8ng
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
