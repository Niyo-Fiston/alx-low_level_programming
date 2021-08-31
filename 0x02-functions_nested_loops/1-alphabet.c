#include "main.h"

/**
 * Main - print print_alphabet function
 *
 * Description:this function prints lower letters
 * Return: 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
