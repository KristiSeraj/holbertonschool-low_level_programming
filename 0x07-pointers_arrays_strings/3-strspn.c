#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i, k;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[k] == accept[i])
			{
				j++;
				break;
			}
			if (accept[i + 1] == '\0')
				return (j);
		}
	}
	return (j);
}
