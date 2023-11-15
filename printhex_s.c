#include "main.h"

int printhex_s(va_list val)
{
	char str;
	int a;
	int lenn = 0, vall;

	str = va_arg(val char *);
	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] < 32 || str[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			lenn = lenn + 2;
			vall = str[a];
			if (vall < 16)
			{
				_putchar('0');
				lenn++
			}
			lenn = len + print_X(vall);
		}
	}
}
