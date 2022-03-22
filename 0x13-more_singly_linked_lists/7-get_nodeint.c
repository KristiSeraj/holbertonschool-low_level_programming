#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: first node
 * @index: index of node
 * Return: the nth node of a linked list, NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (head);
}
