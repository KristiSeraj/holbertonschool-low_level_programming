#include <stdio.h>

/* main - Entry point
 *
 * Return: 0 Always 
 */

int main(void)
{
	long num = 612852475143;
	long division = 2;
	long prime = 0;

	while (num != 1)
	{
		if (num % division == 0)
		{
			num = num / division;
			prime = division;
		}
		division += 1;
	}
	printf("%ld\n", prime);
	return (0);
}
