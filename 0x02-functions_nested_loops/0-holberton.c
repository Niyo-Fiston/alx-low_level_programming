#include "main.h"

/**
 * main - print string in _putchar function
 *
 * Description: this program will Holberton followed by new line
 * Return: 0
 */

int main(void)
{
	char c[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
