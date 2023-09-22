#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all linked list
 * @h: pointer to the list_t
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	 int count = 0;

	while (h)

	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
