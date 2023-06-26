#include "main.h"

/**
 * _printf - a replica of the printf function
 * @format: a character string
 *
 * Return: number of printed outputs
 */

int _printf(const char *format, ...)
{
	va_list args;
	int num_of_output = 0;

	if (format == NULL)
	{
		return (0);
	}

	va_start(args, format);

	num_of_output = _main_printf(args, format);

	va_end(args);
	return (num_of_output);
}
