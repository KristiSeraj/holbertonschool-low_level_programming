#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: The argument to be checked for lowercase character
 * Return: 1 if c is lowercase and 0 if not
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
