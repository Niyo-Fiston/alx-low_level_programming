#include <stdio.h>

/**
 * main - print string in putchar function
 *
 * Description:program to print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
