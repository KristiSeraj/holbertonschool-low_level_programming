#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: first node
 * @n: data of node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;


		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;

		return (new_node);
	}
	return (NULL);
}
