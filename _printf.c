#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: A string
 *
 * Return: the of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, n_printed = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);
	if (format == NULL || !format[i + 1])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				if (format[i + 1] != 'c' && format[i + 1] != 's' && format[i + 1] != '%')
				{
					n_printed += _putchar(format[i]);
					n_printed += _putchar(format[i + 1]);
					i++;
				}
				else
				{
					f = get_func(&format[i + 1]);
					n_printed += f(args);
					i++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			n_printed++;
		}
		i++;
	}
	va_end(args);
	return (n_printed);
}
