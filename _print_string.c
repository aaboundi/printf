#include "main.h"


/**
 * _print_string - print a string
 * @s: A string
 *
 * Return: void
 */
void _print_string(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		_putchar(s[i++]);
}
