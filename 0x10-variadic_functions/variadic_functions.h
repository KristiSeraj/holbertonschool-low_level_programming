#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct p_d - structure for printing data
 * @f_type: format type
 * @print: the function for printing
 */
typedef struct p_d
{
	char *f_type;
	void (*print)(va_list ag_list);
} p_d;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
