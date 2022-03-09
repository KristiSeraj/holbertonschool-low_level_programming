#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;
	
	k = 0;
	while (k < size)
	{
		action(array[k]);
		k++;
	}
}
