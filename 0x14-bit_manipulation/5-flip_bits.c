#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned int i = n ^ m;

	while (i)
	{
		count += (i & 1);
		i >>= 1;
	}
	return (count);
}
