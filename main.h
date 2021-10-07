#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Args
{
	char symbol;
	void (*print)(va_list arg);
}Args;

void print_char(va_list arg);
void print_string(va_list arg);
void print_int(va_list arg);

#endif
