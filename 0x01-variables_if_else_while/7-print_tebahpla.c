#include <stdio.h>

/**
 * main - print string in putchar function
 *
 * Description:program to print alphabet in lowercase in reverse
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
