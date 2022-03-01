#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: size of array
 * @c: specific char
 * Return: NULL if size is 0, pointer to the array and NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int j;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	j = 0;
	while (j < size)
	{
		a[j] = c;
		j++;
	}

	return (a);
}
