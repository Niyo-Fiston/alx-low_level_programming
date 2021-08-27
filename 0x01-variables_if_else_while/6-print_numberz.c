#include <stdio.h>

/**
 * main - print integer in putchar function
 *
 * Description:program to print all single number of base 10 strating from 0
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
