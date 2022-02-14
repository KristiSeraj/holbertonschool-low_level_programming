#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: l returns length of a string
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}
