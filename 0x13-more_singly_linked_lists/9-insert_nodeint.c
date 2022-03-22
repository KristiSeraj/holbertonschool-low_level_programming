#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: first node
 * @idx: index of the list where the new node should be added
 * @n: value of node
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *ptr;

	ptr = *head;
	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = NULL;

	if (node == NULL)
		return (NULL);
	if (node != NULL)
	{
		idx--;
		while (idx != 1)
		{
			ptr = ptr->next;
			idx--;
		}
		node->next = ptr->next;
		ptr->next = node;

		return (node);
	}

	return (NULL);
}
