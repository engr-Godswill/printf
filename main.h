#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(char const *format, ...);
int _main_printf(va_list args, const char *format);
int _putchar(char c);
int _escapers(const char *format, int i);
int _specifiers(const char *format, va_list args, int i);
int _string(const char *string);
int _decimal(long num);

#endif
