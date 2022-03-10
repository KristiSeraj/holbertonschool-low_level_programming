#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ags;
	unsigned int k;
	char *w;

	va_start(ags, n);
	if (separator == NULL)
		separator = "";
	k = 0;
	while (k < n)
	{
		w = va_arg(ags, char*);
		if (w == NULL)
			printf("(nil)");
		else
			printf("%s", w);
		if (k < (n - 1))
			printf("%s", separator);
		k++;
	}
	printf("\n");
	va_end(ags);
}
