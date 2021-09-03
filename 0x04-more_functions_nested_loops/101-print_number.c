#include "main.h"

/**
 * print_number - print any integer with _putchar()
 * @n: input number to print
 *
 */
void print_number(int n)
{
	unsigned int digit = n;

	if (n < 0)
	{
		_putchar('-');
		n = -digit;
	}
	if (n / 10)
		print_number(digit / 10);
	_putchar(digit % 10 + '0');
}
