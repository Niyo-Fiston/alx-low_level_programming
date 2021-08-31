#include "main.h"

/**
 * print_to_98 - this function print from n to 98
 * @n: variable of a random number
 *
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(i);
		}
	}
	_putchar('\n');
}
