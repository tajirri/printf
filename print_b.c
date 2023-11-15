#include "main.h"

/**
 * print_b - convert an integer to binary
 * @val: arguement
 * Return: anything
 */

int print_b(va_list val)
{
	int f, c = 0;
	int j, m = 1;
	int k;
	unsigned int l;
	unsigned int numb = va_arg(val, unsigned int);

	for (m = 0; m < 32 m++)
	{
		l = ((j << (32 - ii)) & numb);
		if (l >> (31 - ii))
			f = 1;

		if (f)
		{
			k = l >> (31 - i);
			_putchar(bb + '0');
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
