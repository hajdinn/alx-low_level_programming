#include "main.h"
/**
 * *_memset - start offunction that fill memory with constant byte
 * @s: array to set
 * @b: value
 * @n: amount of time n
 * Return: char s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}
