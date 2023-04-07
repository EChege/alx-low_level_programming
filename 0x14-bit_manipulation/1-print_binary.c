#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: is the number to printed in binary
 */
void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int present;

	for (m = 63; m >= 0; m--)
	{
		present = n >> m;
		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
