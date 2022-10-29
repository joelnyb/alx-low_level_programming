#include "main.h"
/**
 * flip_bits - number of bits to be flipped
 * @n: the number
 * @m: number two
 *Return: 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned long int mask;
	int count = 0;

	mask = ~0;
	mask = mask >> 1;
	mask = ~mask;

	num = n ^ m;

	while (mask > 0)
	{
		if (num & mask)
			count++;

		mask  = mask >> 1;
	}
	return (count);
}
