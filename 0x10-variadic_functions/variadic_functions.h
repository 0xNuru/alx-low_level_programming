#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct formatter
* @identifier: an identifier to detect data type
* @print: a pointer to a function that prints the detected
* data type
*/

typedef struct formatter
{
	char *identifier;
	void (*print)(va_list arg);
} fmt;
#endif
