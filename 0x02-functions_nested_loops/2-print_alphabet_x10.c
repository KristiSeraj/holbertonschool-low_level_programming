#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowecase 10 times
 */
void print_alphabet_x10(void)
{
	char i;
	int x;

	for(x = 1; x <= 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
