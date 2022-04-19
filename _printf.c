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
	while (format && format[i])
	{
		if (format[i] != '%')
			n_printed += _putchar(format[i++]);
		else
		{
			f = get_func(&format[++i]);
			if (f != NULL)
			{
				n_printed += f(args);
				i++;
			}
			else
				n_printed += _putchar(format[i-1]);
		}
	}
	va_end(args);

	return (n_printed);
}
