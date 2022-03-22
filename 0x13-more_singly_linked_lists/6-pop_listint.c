#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node a linked list
 * @head: first node
 * Return: the head node's data(n) or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int value;

	node = malloc(sizeof(listint_t));
	if (*head == NULL || head == NULL)
		return (0);
	node = *head;
	value = (*head)->n;
	(*head) = (*head)->next;
	free(node);
	node = NULL;

	return (value);
}
