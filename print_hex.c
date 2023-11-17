#include "main.h"

/**
 * print_hex - converts to hex
 * @val: valuee to be converted
 * Return: counter
 */

int print_hex(va_list val)
{
	int x;
	int *array;
	int counter = 0;
	unsigned int y = va_arg(val, unsigned int);
	unsigned int a = y;


	while (y / 16 != 0)
	{
		y =/ 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		array[x] = a % 16;
		a /= 16;
	}

	for (x - counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + 0);
	}
	free(array);
	return counter;
}
