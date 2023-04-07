#include <stdio.h>
#include "main.h"

/**
 * flip_bits - counting the number of bits that will be changed
 * to get from one number to the other
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int present;
	unsigned long int absolute = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		present = absolute >> x;
		if (present & 1)
			count++;
	}
	return (count);
}
