#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * count_word - helps function
 * @s: string to evaluate
 * Return: value
 */
int count_word(char *s)
{
	int x, c, y;

	x = 0;
	y = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - start of function string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 */
char **strtow(char *str)
{
	char **s, *t;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	s = (char **) malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				s[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	s[k] = NULL;

	return (s);
}
