#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct Args
{
	char symbol;
	int (*print)(va_list arg);
}Args;

int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int _printf(const char *format, ...);

#endif
