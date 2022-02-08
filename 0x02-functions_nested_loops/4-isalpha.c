#include "main.h"
/**
 * _isalpha - checks if character is lowercase or uppercase
 * @c - the character to be checked if it is lowercase or uppercase
 * Return: 1 if c is uppercase or lowercase and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
