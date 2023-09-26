#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: first element in the list
 * @index: index of the node to delete
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (count < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		count++;
	}


	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
