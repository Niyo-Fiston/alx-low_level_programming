#include <stdio.h>

/**
 * main - print integer in putchar function
 *
 * Description:program to print all possible combination of all single-digits
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
