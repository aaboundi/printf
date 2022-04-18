#include "main.h"


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

			/* TODO: check if current_char is a % sign */
			/* TODO: if current_char is a % sign */
			/*       (a) check if set next_char */
			/*       (b) check if next_char is %, s or c */
			/*           - if yes -> call va_arg and print */
			/*           - if no  -> skip */

			/* TODO: if current_char is not a % sign, print */

			i++;
		}
	}

	va_end(args);

	return (n_printed);
}
