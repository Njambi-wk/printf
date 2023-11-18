#include "main.h"

/**
 * print_o - prints octal numbers
 * @val: arguments nput
 * Return: counts integer
 */
int print_o(va_list val)
{
	int i;
	int *array;
	int counts = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counts++;
	}
	counts++;
	array = malloc(counts * sizeof(int));

	for (i = 0; i < counts; i++)
	{
		array[i] = tem % 8;
		tem /= 8;
	}
	for (i = counts - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counts);
}
