#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct Args - match the conversion specifiers for printf
 * @symbol: type char pointer of the specifier
 * @print: type pointer to function for the conversion specifier
 *
 */

typedef struct Args
{
	char symbol;
	int (*print)(va_list arg);
} Args;

int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int _printf(const char *format, ...);

#endif
