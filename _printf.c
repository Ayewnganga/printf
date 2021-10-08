#include "main.h"

/**
 *_printf - produces output according to a format
 *@format: a charcater string containing zero or more directives
 *@...: a variable number of arguments to be printed
 *
 *Return: 0
 *
 */

int _printf(const char *format, ...)
{
	int i, j, count_bytes = 0;
	va_list args;

	Args argument[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
	};

	va_start(args, format);

	if (format == NULL)
		return (0);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count_bytes += write(1, (format + i + 1), 1);
			}
			for (j = 0; j < 4; j++)
			{
				if (format[i + 1] == argument[j].symbol)
				{
					count_bytes += argument[j].print(args);
				}
			}
			i++;
		}
		else
		{
			count_bytes += write(1, (format + i), 1);
		}
	}
	va_end(args);
	return (count_bytes);
}
