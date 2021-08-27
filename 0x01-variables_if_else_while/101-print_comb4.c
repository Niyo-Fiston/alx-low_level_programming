#include <stdio.h>

/**
 * main - print integer in putchar function
 *
 * Description:program to print all possible combination of smallest 3-digits
 * Return: 0
 */
int main(void)
{
	int i, i0, i1;

	for (i = 0; i < 8; i++)
	{
		for (i0 = i + 1; i0 < 9; i0++)
		{
			for (i1 = i0 + 1; i1 < 10; i1++)
			{
				putchar(i + '0');
				putchar(i0 + '0');
				putchar(i1 + '0');
				if (i == 7 && i0 == 8 && i1 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
