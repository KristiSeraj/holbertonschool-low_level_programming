#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
