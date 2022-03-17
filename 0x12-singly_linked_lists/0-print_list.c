#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: first element
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t c;

	c = 0;
	for (; h != NULL; h = h->next, count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}

	return (c);
}
