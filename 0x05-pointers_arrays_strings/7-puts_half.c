#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i, length, n;

	i = 0;
	while (str[i] != '\0')
		i++;
	length = i;
	if (i % 2 == 0)
		n = length / 2;
	else 
		n = (length + 1) / 2;
	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
