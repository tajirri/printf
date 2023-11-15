#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int printf_str(va_list vl);
int printf_ch(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlench(const char *str);
int printf_37(void);
int print_b(va_list val);

#endif
