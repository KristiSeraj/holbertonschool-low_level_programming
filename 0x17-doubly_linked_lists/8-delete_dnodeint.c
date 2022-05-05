#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * of a dlistint_t linked list
 * @head: pointer
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		index--;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);

	return (1);
}
