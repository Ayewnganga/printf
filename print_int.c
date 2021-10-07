#include "main.h"

/**
 *print_int - prints an integer
 *@arg: a variable list of arguments containing the int to print
 *
 *Return: void
 *
 */

void print_int(va_list arg)
{
	unsigned int count_zero = 1, num, n, new_num;

	num = va_arg(arg, int);

	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	n = num;
	count_zero = 1;

	while (n > 9)
	{
		n /= 10;
		count_zero *= 10;
	}

	while (count_zero >= 1)
	{
		new_num = ((num / count_zero) % 10) + 48;
		write(1, &new_num, 1)
		count_zero /= 10;
	}
}
