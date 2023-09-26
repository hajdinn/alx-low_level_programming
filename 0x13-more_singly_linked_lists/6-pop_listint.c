#include "lists.h"
/**
 * pop_listint - pop the head node of a linked list
 * @head: pointer to the first element in the linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (*head == NULL)
		return (num);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
