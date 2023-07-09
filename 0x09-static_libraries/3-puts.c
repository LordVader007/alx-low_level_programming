#include "main.h"

/**
 * _puts - print a str followed by new lice to stdout
 * @str: strint to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
