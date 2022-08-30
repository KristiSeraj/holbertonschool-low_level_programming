#include "search_algos.h"
/**
 * binary_search - function that searches for a value in
 * a sorted array of integers using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 * Return: -1 if value is not present in array or if array is NULL
 * index where the values is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i, low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i < high + 1; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
