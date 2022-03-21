#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: the first element
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	for (; h != NULL; h = h->next)
		count++;
	return (count);
}
