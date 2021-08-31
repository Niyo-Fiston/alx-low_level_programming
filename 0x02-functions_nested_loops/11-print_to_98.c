#include "main.h"

/**
 * print_to_98 - this function print from n to 98
 * @n: variable of a random number
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	_putchar(n);
}
