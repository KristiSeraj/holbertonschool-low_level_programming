#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a linked list
 * @head: first node
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	new = (*head);
	if (!new)
		return;

	while (new != NULL)
	{
		new = new->next;
		free(*head);
		*head = new;
	}
	*head = NULL;
}
