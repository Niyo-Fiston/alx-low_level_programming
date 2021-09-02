#include "main.h"

/**
 * _isdigit - print if input is digit
 * @c: value of a digit
 * Return: value
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
