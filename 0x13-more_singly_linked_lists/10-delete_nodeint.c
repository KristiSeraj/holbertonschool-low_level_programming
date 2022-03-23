#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index of a
 * linkes list
 * @head: first node
 * @index: index of node
 * Return: 1 if if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *del;
	unsigned int j;

	del = *head;

	if (del == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}
	for (j = 0; j < (index - 1); del = del->next, j++)
	{
		if (del == NULL || del->next == NULL)
			return (-1);
	}
	node = del->next;
	del->next = node->next;
	free(node);

	return (1);
}
