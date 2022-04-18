#include "main.h"
#include <stddef.h>


/**
 * _print_string - print a string
 * @s: A string
 *
 * Return: The number of char printed
 */
int _print_string(const char *s)
{
	int i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
			_putchar(s[i++]);
	}

	return (i);
}
