#include "main.h"

/**
 * print_number - print any integer with _putchar()
 * @n: input number to print
 *
 */
void print_number(int n)
{
	int i, j;

	i = n / 10;
	j = n % 10;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(i`);
	_putchar(j);
}
