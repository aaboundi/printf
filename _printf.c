#include "main.h"
#include <stddef.h>


/**
 * _printf - produces output according to a format.
 * @format: A string
 *
 * Return: the of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, n_printed = 0;
	char current_char = '\0', next_char = '\0';

	va_start(args, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			current_char = format[i];
			if (current_char == '%')
			{
				next_char = format[++i];
				if (next_char == '%')
					_putchar('%');
				else if (next_char == 'c')
					_putchar(va_arg(args, int));
				else if (next_char == 's')
					_print_string(va_arg(args, char *));
				else if (next_char == '\0')
					break;
				i++;
				continue;
			}
			_putchar(current_char);
			i++;
		}
	}
	va_end(args);
	_putchar(-1);
	return (n_printed);
}
