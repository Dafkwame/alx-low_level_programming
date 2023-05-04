#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit.
 * @n: a number
 *
 * Return: the value of the bit at index index or -1 if an error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int z;

	if (index > 63)
		return (-1);

	z = 1 & (n >> index);

	return (z);
}
