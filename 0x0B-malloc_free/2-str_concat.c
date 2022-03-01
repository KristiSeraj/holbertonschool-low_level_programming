#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int j, k, l;
	char *c;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	j = 0;
	l = 0;
	while (s1[j] != '\0')
	{
		l++;
		j++;
	}
	j = 0;
	l = 0;
	while (s2[j] != '\0')
	{
		l++;
		j++;
	}

	c = malloc((l + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	j = 0;
	k = 0;
	while (s1[j] != '\0')
	{
		c[k] = s1[j];
		j++;
		k++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		c[k] = s2[j];
		j++;
		k++;
	}

	return (c);
}

