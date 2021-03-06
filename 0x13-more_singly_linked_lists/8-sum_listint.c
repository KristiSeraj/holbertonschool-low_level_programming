#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that returns the sum of all data(n)
 * @head: first node
 * Return: sum of all data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; head != NULL; head = head->next)
		sum = sum + head->n;
	return (sum);
}
