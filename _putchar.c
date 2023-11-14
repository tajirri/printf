#include "main.h"

/**
 * _putchar writes character c to stdout
 * @c - the character to print
 *
 * Return: on success 1,
 * n error or fail. -1
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}

