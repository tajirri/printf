#include "main.h"

/**
 *  _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_str}, {"%c", printf_ch},
		{"%%", printf_37},
		{"%i", printf_i}, {"%d", printf_d}, {"%r", print_rev_str},
		"%R", print_rot13_str}, {"%b", print_b}, {"%u", printf_u},
		{"%o", printf_o}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};

	va_list args;
