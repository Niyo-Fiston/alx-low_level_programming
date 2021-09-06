#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates password
 *
 * Return: 0
 */
int main (void)
{
	int pass, sum =0;

	srand(time(0));
	while (sum < 2772 - 127)
	{
		pass = rand() % 127;
		if (pass >32)
		{
			putchar(pass);
			sum += pass;
		}
	}
	putchar(2772 -sum);
	putchar('\n');
	return (0);
}
