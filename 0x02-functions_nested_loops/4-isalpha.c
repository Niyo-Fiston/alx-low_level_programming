#include "main.h"

/**
 * _isalpha - print _isalpha function
 *
 * @c: variable for argument for function
 * Return: if condition check is 1 otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
