#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void pr_char(va_list char_list);
void pr_int(va_list int_list);
void pr_float(va_list float_list);
void pr_string(va_list string_list);
void print_all(const char * const format, ...);
/**
 * pr_char - print character
 * @char_list: list of char
 */
void pr_char(va_list char_list)
{
	printf("%c", va_arg(char_list, int));
}
/**
 * pr_int - print intger
 * @int_list: list of int
 */
void pr_int(va_list int_list)
{
	printf("%i", va_arg(int_list, int));
}
/**
 * pr_float - print float
 * @float_list: list of float
 */
void pr_float(va_list float_list)
{
	printf("%f", va_arg(float_list, double));
}
/**
 * pr_string - print string
 * @string_list: list of strings
 */
void pr_string(va_list string_list)
{
	char *s;

	s = va_arg(string_list, char*);
	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}
/**
 * print_all - function that prints any format
 * @format: format is a list of arguments passed to the function
 * @...: args
 */
void print_all(const char * const format, ...)
{
	int k, l;
	va_list ag_list;
	char *separator = "";
	p_d p_func[] = {
		{"c", pr_char},
		{"s", pr_string},
		{"f", pr_float},
		{"i", pr_int}
	};
	va_start(ag_list, format);
	l = 0;
	while (format != NULL && format[l] != '\0')
	{
		k = 0;
		while (k < 4 && format[l] != *p_func[k].f_type)
			k++;

		if (k < 4)
		{
			printf("%s", separator);
			p_func[k].print(ag_list);
			separator = ", ";
		}
		l++;

	}
	printf("\n");
	va_end(ag_list);
}
