#include "search_algos.h"
/**
 * linear_search - function that searches for a value in a array
 * of integers using the linear search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 * Return: -1 if value is not present in array or if array is NULL
 * index where the values is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);
}
