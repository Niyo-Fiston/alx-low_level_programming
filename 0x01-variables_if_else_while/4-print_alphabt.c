#include <stdio.h>

/**
 * main - print string in putchar function
 *
 * Description:program to print alphabet in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'q' && i != 'e')
		putchar(i);
	}
	putchar('\n');
	return (0);
}
