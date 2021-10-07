#include "main.h"

/**
 *print_char - prints a character
 *@arg: a variable list of arguments containing the char to be printed
 *
 *Return: void
 *
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	write(1, &c, 1);
}
