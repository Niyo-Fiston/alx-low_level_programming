#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string to put into hal
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int c, a, n;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
	}
	if (c % 2 == 0)
	{
		for ((a = c / 2); str[a] != '\0'; a++)
		{
			l = str[a];
			_putchar(l);
		}
	}
	else if (c % 2 != 0)
	{
		n = (c - 1) / 2;
		for (a = n; str[a] != '\0'; a++)
		{
			l = str[a];
			_putchar(l);
		}
	}
	_putchar('\n');
}
