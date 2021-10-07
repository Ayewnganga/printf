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
	void (*print)(va_list arg);
}Args;

void print_char(va_list arg);
void print_string(va_list arg);
void print_int(va_list arg);

#endif
