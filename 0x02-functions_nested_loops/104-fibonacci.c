#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2.
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long i = 0, i = 1, sum;
	unsigned long i_1, i_2, j_1, j_2;
	unsigned long _1, _2;

	for (count = 0; count < 92; count++)
	{
		sum = i + j;
		printf("%lu, ", sum);

		i = j;
		j = sum;
	}

	i_1 = i / 10000000000;
	j_1 = j / 10000000000;
	i_2 = i % 10000000000;
	j2 = j % 10000000000;

	for (count = 93; count < 99; count++)
	{
		_1 = i_1 + j_1;
		_2 = i_2 + j_2;
		if (i_2 + j_2 > 9999999999)
		{
			_1 += 1;
			_2 %= 10000000000;
		}

		printf("%lu%lu", _1, _2);
		if (count != 98)
			printf(", ");

		i_1 = j_f1;
		i_2 = j_2;
		j_1 = _1;
		j_2 = _2;
	}
	printf("\n");
	return (0);
}
