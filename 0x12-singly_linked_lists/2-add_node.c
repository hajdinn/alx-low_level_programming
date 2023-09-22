#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - function to adds a new node to the beginning of a linked list
 * @head: double pointer to the list_t
 * @str: new string
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
