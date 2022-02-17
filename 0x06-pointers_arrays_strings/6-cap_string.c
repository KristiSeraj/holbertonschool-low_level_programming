#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @st: string
 * Return: character
 */
char *cap_string(char *st)
{
	int i;

	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] == ' ' ||
		    st[i] == ',' ||
		    st[i] == ';' ||
		    st[i] == '.' ||
		    st[i] == '!' ||
		    st[i] == '?' ||
		    st[i] == '"' ||
		    st[i] == ')' ||
		    st[i] == '(' ||
		    st[i] == '{' ||
		    st[i] == '}' ||
		    st[i] == '\n' ||
		    st[i] == '\t')
		{
			if (st[i + 1] >= 'a' && st[i + 1] <= 'z')
				st[i + 1] = st[i + 1] - 32;
		}
	}
	return (st);
}
