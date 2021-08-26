#include <stdio.h>

/**
 * main - print string in the printf function
 *
 * description: using main function
 * this progrma prints the size of char,int,long int, long long int and float
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %d byt(e)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
