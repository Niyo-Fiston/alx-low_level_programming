#include "main.h"

/**
 * rev_string - function that prints reverse of string
 * @s: string
 */
void rev_string(char *s)
{
	int rev, r_c;
	char c;

	for (rev = '\0'; s[rev] != 0; rev++)
	{
	}
	r_c = 0;
	for (rev = rev - 1; r_c < rev; r_c++)
	{
		c = s[rev];
		s[rev] = s[r_c];
		s[r_c] = c;
		rev--;
	}
}
