#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdarg.h>
typedef struct print
{
	char *op;
	void (*f)(va_list);
} print_t;
int _putchar(char c);
/* write a function that returns the sum of its parameters */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list mylist);
void print_i(va_list mylist);
void print_f(va_list mylist);
void print_s(va_list mylist);

#endif
