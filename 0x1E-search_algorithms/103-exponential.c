#include "search_algos.h"
/**
 * binary_search_exp - function that search for a value in a sorted array
 * of integers using binary search algorithm
 * @array: pointer to the first element
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: index of the value searched
 * -1 if value is not present in array or if array is NULL
 */
int binary_search_exp(int *array, int left, int right, int value)
{
	int mid, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right + 1; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			return (binary_search_exp(array, left, mid - 1, value));
		return (binary_search_exp(array, mid + 1, right, value));
	}
	return (-1);
}
/**
 * exponential_search - function that searches for a value in
 * a sorted array of integers using exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 * -1 if value is not present or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, right;

	if (array == NULL)
		return (-1);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i < size)
		right = i;
	else
		right = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (binary_search_exp(array, i / 2, right, value));
}
