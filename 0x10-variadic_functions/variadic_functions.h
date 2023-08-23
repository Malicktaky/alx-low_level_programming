#ifndef __VARIADIC_H__
#define __VARIADIC_H__

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
