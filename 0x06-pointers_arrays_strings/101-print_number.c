#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: number
 */
void print_number(int n)
{
	unsigned int numb;

	numb = n;

	if (numb < 0)
	{
		_putchar('-');
		numb = -numb;
	}

	if (numb / 10)
		print_number(numb / 10);
	_putchar((numb % 10) + '0');
}
