#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a linked list
 * @head: first node
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *tmp;
	new = *head;

	while(new != NULL)
	{
		tmp = new;
		new = new->next;
		free(tmp);
	}
	*head = NULL;
}
