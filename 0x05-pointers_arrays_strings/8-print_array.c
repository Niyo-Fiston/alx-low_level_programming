#include "main.h"
#include <stdio.h>

/**
 * print_array - print an element of array of an integer
 *
 * @a: pointer of integer
 * @n: integer
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
