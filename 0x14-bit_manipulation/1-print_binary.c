#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: a number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int k;
	int f, g = 0;

	for (f = 63; f >= 0; f--)
	{
		k = n >> f;

		if (k & 1)
		{
			_putchar('1');
			g++;
		}
		else if (g)
			_putchar('0');
	}
	if (!g)
		_putchar('0');
}
