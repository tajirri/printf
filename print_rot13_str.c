#include "main.h"

/**
 * print_rot13_str - prints rot13
 * @val: arguements
 * Return: anything
 */

int print_rot13_str(va_list val)
{
	int a, b, c, count = 0;
	char *str = va_arg(val, char*);
	char x[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char y[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a]; a++)
	{
		c = 0;
		for (b = 0; x[b] && !c; b++)
		{
			if (str[a] == x[b])
			{
				_putchar(y[b]);
				count++;
				c = 1;
			}
		}
		if (!c)
		{
			_putchar(str[a]);
			count++
		}
	}
	return (coun);
}
