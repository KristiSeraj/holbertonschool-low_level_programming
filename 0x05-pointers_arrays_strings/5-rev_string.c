#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	j = 0;
	while (j < i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
		i--;
	}
}
