#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a binanry number pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int bc = 0;
	unsigned int con = 0;

	while (b[bc] != '\0')
	{
		if (b[bc] == '0' || b[bc] == '1')
			con = con * 2 + (b[bc] - '0');
		else
			return (0);
		bc++;
	}
	return (con);
}
