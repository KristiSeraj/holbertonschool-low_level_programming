#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a linked list
 * @head: first node
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (!head)
		return;

	while (*head != NULL)
	{
		new = (*head);
		(*head) = (*head)->next;
		free(new);
	}
	*head = NULL;
}
