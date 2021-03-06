#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - function that prints elements of a linkes list
 * @h: first element
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	for (; h != NULL; h = h->next, count++)
	{
		printf("%d\n", h->n);
	}

	return (count);
}
