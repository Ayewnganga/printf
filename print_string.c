#include "main.h"

/**
 *print_string - prints a string
 *@arg: a variable list of arguments containing the string to be printed
 *
 *Return: void
 *
 */

int print_string(va_list arg)
{
	char *s;
	int i, count_bytes = 0;

	s = va_arg(arg, char *);
	for (i = 0; s[i] != '\0')
	{
		write(1, (s + i), 1);
		count_bytes++;
	}
	return (count_bytes);
}
