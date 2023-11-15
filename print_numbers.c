#include "main.h"
/**
 * printf_i - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_i(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, x = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			x = x * 10;
			num = num / 10;
		}
		num = n;
		while (x > 0)
		{
			digit = num / x;
			_putchar(digit + '0');
			num = num - (digit * x);
			x = x / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_d - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_d(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int x = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			x = x * 10;
			num = num / 10;
		}
		num = n;
		while (x > 0)
		{
			digit = num / x;
			_putchar(digit + '0');
			num = num - (digit * x);
			x = x / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
