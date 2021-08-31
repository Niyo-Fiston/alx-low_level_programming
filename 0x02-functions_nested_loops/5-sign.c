#include "main.h"

/**
 * print_sign - print a sign of number
 * @n: interger for argument of funcion
 *
 * Return: 0, 1, -1 by conditions
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
