#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long i = 0, j = 1, sum;
	float t_sum;

	while (1)
	{
		sum = i + j;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			t_sum += sum;

		i = j;
		j = sum;
	}
	printf("%.0f\n", t_sum);

	return (0);
}
