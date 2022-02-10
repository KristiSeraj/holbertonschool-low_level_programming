#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (i <= size - j)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
