#include "main.h"

/**
 * print_p - prints a pointer
 * @val: arguement
 * Return: anything
 */

int print_p(va_list val)
{
	void *ptr;
	char *str = "(nil)";
	int c, a;
	long int i;

	ptr = va_arg(val, void *);
	if (ptr == NULL)
	{
		for (a = 0; str[a] != '\0'; a++)
			_putchar(str[a]);
		return (a);
	}
	i = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	c = print_hexa(i);
	return (c + 2);
}
