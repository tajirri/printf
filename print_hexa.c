#include "main.h"

/**
 * print_X - converts to X
 * @val: value
 * Return: anything
 */

int print_hexa(unsigned long int numb)
{
	long int a, count = 0;
	long int *arr;
	unsigned long int temp = numb;

	while (numb / 16 != 0)
	{
		numb = numb / 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(long int) * count);
	if (arr == NULL)
		turn (NULL);
	for (a = 0; a < count; a++)
	{
		if (arr[a] > 0)
			arr[a] = arr[a] + 7;
		_putchar(arr[a] = '0');
	}
	free(arr);
	return (count);
}
