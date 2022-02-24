#include "main.h"
/**
 * length - find length of string
 * @s: string
 * Return: 0 if no string otherwise length of string
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}
/**
 * check - checks for palindrome
 * @s: string
 * @l: length
 * @i: index
 * Return: 1 if string is palindrome otherwise return 0
 */
int check(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (check(s, l, i + 1));
	return (0);
}
/**
 * is_palindrome - calls two functions to check for palindrome
 * @s: string
 * Return: 1 if no string or string is palindrome
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = length(s);

	if (!*s)
		return (1);
	return (check(s, l, i));
}
