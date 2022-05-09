#include "main.h"
int _atoi(char *s)
{
	int l = 0;
	int d = 0;
	int sgn = 1;

	while ((s[l] < '0' || s[l] > '9') && s[l] != 0)
	{
		if (s[l] == '-')
			sgn *= -1;
		l++;
	}
	while ((s[l] >= '0' && s[l] <= '9') && s[l] != 0)
	{
		d = d * 10 - (s[l] - '0');
		l++;
	}
	sgn *= -1;
	return (d * sgn);
}
