#include "main.h"
/**
 * print_reverse_string - prints string in reverse
 * @val: argument input
 * Return: the reversed string
 */
int print_reverse_string(void)
{
	char *s = NULL;
	int a;
	int b = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a++)
	{
		_putchar(s[a]);
	}
	return (b);
}
