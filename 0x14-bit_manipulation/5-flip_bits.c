#include "main.h"
#include <stdio.h>

/**
 * flip_bits - the number of bits you would need to flip
 * to get from one number to another.
 * @n: a number
 * @m: another number
 * Return: An unsigned integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ter, ed = m ^ n;
	int con, ver = 0;

	for (con = 63; con >= 0; con--)
	{
		ter = ed >> con;
		if (1 & ter)
			ver++;
	}

	return (ver);
}
