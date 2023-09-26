#include "lists.h"
/**
 * get_nodeint_at_index - node of index in a linked list
 * @head: head node in the linked list
 * @index: index of the node
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (count != index && tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	if (count != index)
		return (NULL);

	return (tmp);
}
