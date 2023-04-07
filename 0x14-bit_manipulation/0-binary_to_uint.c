#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converting a binary number to unsigned int
 * @b: string that contains the binary number
 *
 * Return: the number that has been converted
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int bin_num = 0;

	if (!b)
		return (0);
			for (x = 0; b[x]; x++)
			{
				if (b[x] < '0' || b[x] > '1')
					return (0);
				bin_num = 2 * bin_num + (b[x] - '0');
			}
	return (bin_num);
}
