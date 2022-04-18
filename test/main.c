#include "../main.h"
#include <stdio.h>
#include <limits.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	_printf("Character:[%c]\n", 'c');
	printf("Character:[%c]\n", 'c');
	_printf("String:[%s]\n", "Hello world");
	printf("String:[%s]\n", "Hello world");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	return (0);
}
