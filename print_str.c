#include "main.h"

/**
 * printf_str - print a string
 * l - length of string
 * Return l
 */

int printf_str(va_list val)
{
	char *str;
	int n;
	int l;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		l = _strlen()str;
		for (n = 0; n < l; n++)
			_putchar(str[n]);
		return (l);
	}
	else
	{
		l = _strlen(str);
		for (n = 0; n < l; n++)
			_putchar(str[n]);
		return (l);
	}
}
