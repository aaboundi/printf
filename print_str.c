#include "main.h"

/**
 * print_str - prints string
 * @args: arguments
 * Return: The number of printed character
 */
int print_str(va_list args)
{
	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		return (0);

	for (j = 0; str[j]; j++)
		_putchar(str[j]);

	return (j);
}
