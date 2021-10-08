#include "main.h"

/**
 *print_char - prints a character
 *@arg: a variable list of arguments containing the char to be printed
 *
 *Return: void
 *
 */

int print_char(va_list arg)
{
	char c;
	int count_bytes = 1;

	c = va_arg(arg, int);
	write(1, &c, 1);

	return (count_bytes);
}
