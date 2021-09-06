#include "main.h"

/**
 * _strlen - function that return length of string
 * @s: the string value
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while(*s++)
		i++;

	return (i);
}
