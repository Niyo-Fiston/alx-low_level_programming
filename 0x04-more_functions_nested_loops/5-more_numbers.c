#include "main.h"

/**
 * more_numbers - print sequence of numbers
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');
			_putchar(j % 10 + 48);
		}
		_putchar('\n');
	}
}