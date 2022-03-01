#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicated a string
 * @str: string
 * Return: pointer to a newly allocated space in memory, NULL if str is nULL
 * NULL if the duplicated string is NULL
 */
char *_strdup(char *str)
{
	char *c;
	int k, l;

	l = 0;
	k = 0;

	while (str[k] != '\0')
	{
		l++;
		k++;
	}

	c = malloc((l + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (str[k] != '\0')
	{
		c[k] = str[k];
		k++;
	}

	return (c);
}
