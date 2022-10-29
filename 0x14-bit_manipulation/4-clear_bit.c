#include "main.h"

/**
 * clear_bit - set a bit to 0
 * @n: the number to be passed
 * @index: index at which it will be flipped
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, mask2;

	if (n == NULL)
		return (-1);

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1 << index;
	mask2 = *n & (~mask);
	*n = *n & mask2;
	return (1);

}
