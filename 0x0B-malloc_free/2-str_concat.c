#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: c the concatenated string, NULL for failure
 */
char *str_concat(char *s1, char *s2)
{
	int j, k, l;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = 0;
	for (j = 0; s1[j] != '\0'; j++)
		l++;
	for (j = 0; s2[j] != '\0'; j++)
		l++;

	c = malloc((l + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);
	k = 0;
	for (j = 0; s1[j] != '\0'; j++, k++)
		c[k] = s1[j];
	for (j = 0; s2[j] != '\0'; j++, k++)
		c[k] = s2[j];

	return (c);
}
