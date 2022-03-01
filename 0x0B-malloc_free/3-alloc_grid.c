#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer if success, NULL for failure
 * and if width or height is 0 or negative return NULL
 */
int **alloc_grid(int width, int height)
{
	int **my_array;
	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	my_array = malloc(sizeof(int *) * height);

	if (my_array == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
		my_array[j] = malloc(sizeof(int) * width);
	if (my_array[j] == NULL)
	{
		while (j >= 0)
		{
			free(my_array[j]);
			j--;
		}
		free(my_array);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			my_array[j][k] = 0;
		}
	}
	return (my_array);
}
