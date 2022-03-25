#include "main.h"
/**
 * get_endianness - check for endianness
 * Return: o if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
