#include "main.h"

/**
 * print_hex_X - prints octal numbers
 * @val: arguments nput
 * Return: counts integer
 */
int print_hex_X(va_list val)
{
	int i;
	int *array;
	int counts = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counts++;
	}
	counts++;
	array = malloc(counts * sizeof(int));

	for (i = 0; i < counts; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = counts - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counts);
}
