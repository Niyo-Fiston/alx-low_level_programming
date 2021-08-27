#include <stdio.h>

/**
 * main - print integer in putchar function
 *
 * Description:program to print all possible combination of smallest two-digits
 * Return: 0
 */
int main(void)
{
	int i, i1;

	for (i = 0; i <= 98; i++)
	{
		for (i1 = i + 1; i1 <= 99; i1++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((i1 / 10) + '0');
			putchar((i1 % 10) + '0');

			if (i == 98 && i1 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
