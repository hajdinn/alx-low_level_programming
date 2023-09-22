#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - legnth of struct list_t
 * @h: head node pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
