#include "../main.h"
#include <stdio.h>
#include <limits.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int n_printed = 0;

	_printf("Character:[%c]\n", 'c');
	printf("Character:[%c]\n", 'c');

	n_printed = _printf("String:[%s]\n", "Hello world");
	printf("Hello world  > n_printed: %d\n", n_printed);

	n_printed = printf("String:[%s]\n", "Hello world");
	printf("Hello world > n_printed: %d\n", n_printed);

	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	return (0);
}
