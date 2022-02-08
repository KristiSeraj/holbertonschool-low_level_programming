#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @x: the number given for last digit
 * Return: i returns the last digit
 */
int print_last_digit(int x)
{
	int i;

	if (x < 0)
		x = -x;
	i = x % 10;
	_putchar(i + '0');
	return (i);
}
