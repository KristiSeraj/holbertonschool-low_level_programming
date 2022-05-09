#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: character checked
 * Return: 1 is uppercase 0 is not uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

