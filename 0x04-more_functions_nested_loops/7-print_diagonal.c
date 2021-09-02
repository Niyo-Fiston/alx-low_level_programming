#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: value of n
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}	
			_putchar('\\');
			_putchar('\n');
		}
		
	}
	_putchar('\n');
}