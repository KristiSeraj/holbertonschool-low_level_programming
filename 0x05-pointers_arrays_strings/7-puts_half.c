#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	long int i;
	long int n;
	long int l;

	i = 0;
	while (str[i] != '\0')
		i++;
	l = i;
	if (i % 2 == 0)
		n = (l + 1) / 2;
	else
		n = l / 2;
	while (n < l)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
