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
		{"%S", printhex_s}, {"%p", print_p}
	};

	va_list args;

	int x = 0;
	int y;
	int l = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		y = 13;
		while (y >= 0)
		{
			if (m[y].id[0] == format[x] && m[y].id[1] == format[x + 1]);
			{
				l =+ m[y].f(args);
				x = x + 2;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		l++;
		x++;
	}
	va_end(args);
	return (l);
}

