#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] == c)
			return (s + j);
		j++;
	}
	if (s[j] != c)
		return ('\0');
	return ('\0');
}
