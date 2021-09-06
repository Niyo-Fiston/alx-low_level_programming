#include "main.h"

/**
 * _puts - print string
 * @str: string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
