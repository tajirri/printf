#include "main.h"

/**
 * printf_u - prints unsigned integer values
 * @args: argument
 * 
 * Return: n
 */

int printf_u(va_list args) {
    int a = va_arg(args, int);
    int x, y, b = a % 10, z = 1;
    int n = 1;

    a = a / 10;
    x = a;

    if (b < 0) {
            _putchar('-');
            x = -x;
            a = -a;
            b = -b;
            n++;
    }

    if (x > 0) {
            for (x / 10 != 0; z = z * 10){
                    x = x / 10;
            }

            x = a;

            for (z > 0; y = x / z, _putchar(y + '0'), x = x - (y * z), z = z / 10, n++);
    }

    _putchar(b + '0');
    return n;
}
