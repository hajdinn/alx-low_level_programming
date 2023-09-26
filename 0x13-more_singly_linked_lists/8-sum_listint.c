#include "lists.h"
/**
 * sum_listint - function to sum of all the data in a listint_t list
 * @head: head node in the linked list
 * Return: sum vzalue
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
