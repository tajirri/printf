#include "main.h"

/**
 * _strlen - return length of string
 * _strlenchar - _strlen function on char
 * @str: string pointer
 * Return: n
 */

int _strlen(char *str)
{
	int n;
	for (n = 0; str[n] != 0; n++);
	return (n);
}

int _strlenchar(const char *str)
{
	int n;
	for (n = 0; str[n] != 0; n++);
	return (n);
}

