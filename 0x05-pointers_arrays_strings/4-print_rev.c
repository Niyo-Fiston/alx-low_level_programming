#include "main.h"

/**
 * print_rev - func that prints a reverse of a string
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int rev;

	for (rev = 0; s[rev] != 0; rev++)
	{
	}
	for (rev = rev - 1; rev >= 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');

}
