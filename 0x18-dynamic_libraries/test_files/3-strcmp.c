#include "main.h"
/**
 * _strcmp - compares two string2
 * @s1: string
 * @s2: string
 * Return: return 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			diff = 0;
		i++;
	}
	return (diff);
}
