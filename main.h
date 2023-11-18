#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

typedef struct format
{
	char *ab;
	int (*j)();
}match;

int _putchar(char c);
int _printf(const char *format, ...);
int print_character(va_list val);
int print_string(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int print_37(void);
int print_integers(va_list args);
int print_decimal(va_list args);
int print_binary(va_list val);
int print_u(va_list args);
int print_o(va_list val);
int print_x(va_list val);
int print_hex_X(va_list val);
int print_S(va_list val);


#endif
