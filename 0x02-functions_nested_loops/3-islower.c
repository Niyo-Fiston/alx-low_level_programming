#include "main.h"

/**
 * _islower - print if aphabet is lowercase
 * @c: is the interger that our function will use
 * Return: 1 0r 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
