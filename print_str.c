#include "main.h"

/**
 * print_str - prints string
 * @args: arguments
 * Return: The number of printed character
 */
int print_str(va_list args)
{
	int j = 0, n = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	for (j = 0; str[j]; j++)
	{
		if (_putchar(str[j]) != -1)
			n++;
	}

	return (n);
}
