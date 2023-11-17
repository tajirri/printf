#include "main.h"

/**
 * print_rev_str - prints a string in reverse
 * @val: arguements
 */

int print_rev_str(va_list val)
{
	char *str va_arg(val, char*);
	int k = 0, a;

	if (str == NULL)
		str = "(null)";
	while (str[k] != '\0')
		k++;
	for (a = k - 1; a >= 0; a--)
		_putchar(str[a]);
	return (k);
}
