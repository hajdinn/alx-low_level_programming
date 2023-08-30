#include "main.h"
/**
 * length - helps do it
 * @s: string
 * Return: string length
 */
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + length(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * check_pal - helps more
 * @i: integer i
 * @s: string
 * Return: int value
 */
int check_pal(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
		{
			return (0);
		}
		else
		{
			return (check_pal(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome -start of function for is paldindrome
 * @s: string to check
 * Return: value
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (check_pal(i, s));

}
