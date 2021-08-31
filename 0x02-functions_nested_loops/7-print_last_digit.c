#include "main.h"

/**
 * print_last_digit - this function print last digit of number
 * @c: int for argument of function
 *
 * Return: number
 */

int print_last_digit(int c)
{
	int n = c % 10;

	if (n < 0)
	{
		n *= -1;
		_putchar(n);
		return (n);
	}
	else
	{
		_putchar(n);
		return (n);
	}
}
