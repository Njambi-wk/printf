#include "main.h"

/**
 * _printf - printf identifiers
 * @format: identifier nput
 * Return: int value
 */
int _printf(const char *format, ...)
{
	match n[] = {
		{"%c", print_character}, {"%s", print_string}, {"%%", print_37}, {"%d", print_decimal}, {"%i", print_integers}, {"%b", print_binary},
	       	{"%u", print_u}, {"%o", print_o}, {"%x", print_x}, {"%X", print_hex_X}, {"%S", print_S}
	};

	va_list args;
	int i = 0;
	int length = 0;
	int k;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
here:
	while (format[i] != '\0')
	{
		k = 10;
		while (k >= 0)
		{
			if (n[k].ab[0] == format[i] && n[k].ab[1] == format[i + 1])
			{
				length = length + n[k].j(args);
				i = i + 2;
				goto here;
			}
			k--;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
