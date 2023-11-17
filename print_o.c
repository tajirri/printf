#include "main.h"

/**
 * print_o - converts to octal
 * @val:  variable
 * Return: counter
 */

int prinf_o(va_list val)
{
	int x, counter = 0;
	int *array;
	unsigned int y = va_arg(val. unsigned int);
	unsigned int a = y;

	if (y == 0) {
		_putchar('0');
		return 1;
	}

	while (1) {
		y /= 8;
		counter++;
		if (y == 0)
			break;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	x = 0;
	while (1) {
		array[x] = a % 8;
		a /= 8;
		x++;
		if (a == 0)
			break;
	}

	for (x = counter - 1; x >= 0; x--){
		_putchar(array[x] + '0');
	}
	free(array);
	return counter;
}

