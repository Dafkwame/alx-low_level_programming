#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *endian;
	unsigned int type = 1;

	endian = (char *) &type;

	return ((int)*endian);
}
