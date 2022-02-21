#include "main.h"
/**
 * _strstr = locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 * of NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
				return (needle);
		}
	}
	return ('\0');

}
