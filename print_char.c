#include "main.h"

/**
 * printf_ch - prints a char
 * @val: value
 */

int printf_ch(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
