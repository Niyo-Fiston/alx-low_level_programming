#include "main.h"
/**
 * set_string - function set the vaule of a pointer to a character
 * @s: string to change
 * @to: copied string
 */
void set_string(char **s, char *to)
{
	*s = &to;
}
