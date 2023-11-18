#include "main.h"
/**
 * print_p - prints a pointer
 * @val: argument input
 * Return: integer
 */
int print_p(va_list val)
{
	void *p;
	char *s = "nil";
	long int j;
	int k;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	j = (unsigned long int)p;
	_putchar('0');
	_putchar('j');
	k = print_hex_xtra(j);
	return (k + 2);
}
