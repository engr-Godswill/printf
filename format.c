#include "main.h"

/**
 * _main_printf - checks for specifiers and returns count
 * @args: arguments
 * @format: a string character
 *
 * Return: ...
 */
int _main_printf(va_list args, const char *format)
{
	int i = 0, count = 0;
	char ref;


	for (i = 0; format[i]; i++)
	{
	ref = format[i];
	switch (ref)
	{
		case '%':
	count += _specifiers(format, args, i);
	break;
	default:
	count += _putchar(ref);
	}
	}
	return (count);
}
