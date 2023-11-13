#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_string(const char *str);
int print_num(int n);
int print_binary(unsigned int num);
int _putchar(char c);
int handle_print(char specifier, va_list args);
int print_hexa(unsigned int num, int uppercase);
int print_unsigned_int(unsigned int num);
int print_octal(unsigned int num);
int print_rev(char *);
int print_pointer(const void *ptr);

#endif
