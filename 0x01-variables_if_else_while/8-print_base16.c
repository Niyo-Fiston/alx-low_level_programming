#include <stdio.h>

/**
 * main - print string in putchar function
 *
 * Description:program to print all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
