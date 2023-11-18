#include "main.h"
/**
 * print_character - prints a character
 * @val: argument input
 * Return: 1 0n success
 */
int print_character(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
