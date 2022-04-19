#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: A string
 *
 * Return: the of characters printed
 */
int _printf(const char *format, ...)
{
	int n_printed = 0, r = 0;
	int (*f)(va_list);
	va_list args;

	va_start(args, format);

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}

	while (*format)
	{
		if (*format == '%')
		{
			f = get_func(++format);
			if (f)
			{
				r = f(args);
				format++;
			}
			else
				r = _putchar(*(format - 1));
		}
		else
			r = _putchar(*format++);

		if (r > 0)
			n_printed += r;
	}
	va_end(args);
	return (n_printed);

}
