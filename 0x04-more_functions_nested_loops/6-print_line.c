#include "main.h"

/**
 *  print_line - print straigjt line
 *  @n: value of n
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
