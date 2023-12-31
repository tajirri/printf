#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format
 * @id
 * @f
 */


typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_str(va_list val);
int printf_ch(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *str);
int _strlenchar(const char *str);
int printf_37(void);
int print_b(va_list val);
int printf_i(va_list args);
int printf_d(va_list args);
int printf_u(va_list args);
int print_X(unsigned int numb);
int print_hexa(unsigned long int numb);
int printhex_s(va_list val);
int prinf_o(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_p(va_list val);
int print_rev_str(va_list val);
int print_rot13_str(va_list val);

#endif
